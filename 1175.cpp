#include<bits/stdc++.h>
using namespace std;
int a[1001][1001],f[1001][1001],n,i,j,k;
int main()
{ 
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)cin>>a[i][j];
	f[1][1]=a[1][1];
	for(i=2;i<=n;i++)
	{ 
		f[1][i]=a[1][i]+f[1][i-1];
		f[i][1]=a[i][1]+f[i-1][1];
	}
	for(i=2;i<=n;i++)
	for(j=2;j<=n;j++)
	f[i][j]=min(f[i-1][j],f[i][j-1])+a[i][j];
	cout<<f[n][n];
}