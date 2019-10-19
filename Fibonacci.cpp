
@ Alen George

\\ Code



#include<iostream>
using namespace std;
int main()
{
int a,b,c,n,i;

a=0;
b=1;

cout<<"Enter the number of terms";
cin>>n;
cout<<a<<endl<<b<<endl;
for(i=2;i<n;i++)
{c=a+b;
a=b;
b=c;
cout<<c<<endl;
}

return 0;
}
