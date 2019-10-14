#include<iostream>
using namespace std;

int main()
{
int a,b,c,d;
cout<<"Enter the number\n";
cin>>a;
b=a/100;
c=a%100;
c=c%10;
d=(b*10)+c;
if(a%d==0)
cout<<"The number is a gapfull number";
else 
cout<<"The number is not a gapfull number\n";

}
