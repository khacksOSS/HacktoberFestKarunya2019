//Question 1-- link: https://codeforces.com/gym/101532/problem/B
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ll a[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);  
            if(a[i]==-1 && i!=0 ){
                a[i] = (a[i-1]+1)%m;
            }
        }
        for(int i=0;i<n;i++)
        	printf("%lld ",a[i]);
        printf("\n");
    }
}