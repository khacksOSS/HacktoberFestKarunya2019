#include<iostream>
using namespace std;
int main()
{
int a;
cin>>a;
int b[a];
for(int i=0;i<a;i++)
{
cin>>b[i];}
for(int i=0;i<a;i++)
{
for(int j=0;j<a-1;j++)
{
if(b[j]>b[j+1])
{
int temp=b[j];
b[j]=b[j+1];
b[j+1]=temp;
}
}
}
for(int i=0;i<a;i++)
{
cout<<b[i];}
}
