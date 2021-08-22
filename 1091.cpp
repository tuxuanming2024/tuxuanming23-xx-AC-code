#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
	int n,m,i,k,s=0,hop,j,l,r;
	cin>>n>>m;
	for( i=1;i<=n;i++ ) cin>>a[i];
	for( i=1;i<=m;i++ ) 
	{
		cin>>k;
		l=1;r=n;s=0;
		while( l<=r )
		{
			hop=( l+r )>>1;
			if( a[hop]==k ) {s++;break;}
			if( a[hop]>k ) r=hop-1;
			else l=hop+1;
	    }
		for(j=hop-1;j>=1;j--)
		{
			if(a[j]==k) s++;
			else break;
		} 
		for(j=hop+1;j<=n;j++ )
		{
			if(a[j]==k) s++;
			else break;
		}
		cout<<s<<" ";
	}
	return 0;
}
