#include<bits/stdc++.h>
int a[21][21],n,cnt,i,j,k;
using namespace std;
int main() {
	cin>>n;for(i=1; i<=2*n-1; i++) {
	if(i%2){for(j=1; j<=n; j++)
	for(k=1; k<=n; k++)if(j+k==i+1) a[j][k]=++cnt;}
	else{for(j=n; j>=1; j--)
	for(k=n; k>=1; k--)if(j+k==i+1)a[j][k]=++cnt;}}
	for(i=1; i<=n; i++)for(j=1; j<=n; j++)
	if(j!=n)cout<<a[n-j+1][i]<<' ';
	else cout<<a[n-j+1][i]<<'\n';}