#include<bits/stdc++.h>
using namespace std;
char a[105][105];
int book[105][105];
int main()
{
	int n,m,i,j,k,s=0;
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++) cin>>a[i][j];
    cin>>m; 
	for(k=1;k<m;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				if(a[i][j]=='@') book[i][j]=1;	
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(book[i][j]==1)
				{
					if(a[i+1][j]=='.') a[i+1][j]='@';
					if(a[i-1][j]=='.') a[i-1][j]='@';
					if(a[i][j+1]=='.') a[i][j+1]='@';
					if(a[i][j-1]=='.') a[i][j-1]='@';
				}
				
			}
		}
	}
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(a[i][j]=='@') s++;
	cout<<s;
}