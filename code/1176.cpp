#include <iostream>
using namespace std;
long long f[105][105],book[105][105];
int main()
{
	int m,n,x,y;
	int next[9][2]={{0,0},{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
	cin>>n>>m>>x>>y;
	f[0][0]=1;
	for(int i=0;i<=8;i++)
	{
		int tx=x+next[i][0],ty=y+next[i][1];
		book[tx][ty]=1;
	}
	for(int i=1;i<=n;i++)
		if(!book[i][0]) f[i][0]=f[i-1][0];
	for(int i=1;i<=m;i++)
		if(!book[0][i]) f[0][i]=f[0][i-1];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			if(!book[i][j]) f[i][j]=f[i-1][j]+f[i][j-1];
			else f[i][j]=0;
		}
	cout<<f[n][m];
	return 0;
}