from flask import Flask,render_template,url_for,request
import numpy as np
import pandas as pd

df=pd.read_csv('Admission_Predict.csv')

df.rename(columns = {"Chance of Admit ": "coa","Serial No.":"Sno"},inplace=True)

y=df.coa

df=df.drop('Sno',axis=1)

x=df.drop('coa',axis=1)

from sklearn.model_selection import train_test_split

X_train, X_test, y_train, y_test = train_test_split(x, y,test_size=0.2)

from sklearn.linear_model import LinearRegression
clf=LinearRegression()

clf.fit(X_train,y_train)
confidence = clf.score(X_test, y_test)
print("\nThe confidence score:\n")
print(confidence)

y_pred = clf.predict(X_test)
x = np.array(y_pred).tolist()

# printing first 5 predictions
print("\nThe prediction:\n")
for i in range(0, 5):
    print(x[i])

# printing first five expectations
print("\nThe expectation:\n")
print(y_test.head())

clf.predict([[330,110,2,3.5,4.0,8.96,0]])

import pickle

with open('model_pickle','wb') as f:
 pickle.dump(clf,f)

with open('model_pickle','rb') as f:
 mp=pickle.load(f)

print(mp.predict([[330,110,2,3.5,4.0,8.96,0]]))