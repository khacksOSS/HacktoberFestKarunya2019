
//https://codeforces.com/gym/101532/problem/G
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll t;
	ll m,n;
	ll z,c;
	//scanf("%lld",&t);
	cin>>t;
	while(t--){
		z=0,c=0;
		//scanf("%d %d",&n,&m);
		cin>>n>>m;
		char img[n][m];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>img[i][j];
				if((i==0||j==0 )&& img[i][j]=='0')
					z++;
				if((i==m-1||j==n-1)&& img[i][j]=='0')
					z++;
				if((i>0&&i<m-2)&&(j>0&&j<n-1)&&img[i][j]=='1')
					c++;	
			}
		}
		if(z>c)
			printf("-1\n");
		else
			printf("%d\n",z);
	}
}
