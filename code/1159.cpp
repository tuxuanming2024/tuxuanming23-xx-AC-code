#include <iostream>
using namespace std;
int main()
{
	int n,m,tx,ty,s;
	char a[105][105],b[105][105];
	int f[8][2]={{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,1},{1,-1},{-1,-1}};
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]=='?')
			{
				s=0;
				for(int k=0;k<8;k++)
				{
					tx=i+f[k][0];
					ty=j+f[k][1];
					if(a[tx][ty]=='*') s++;
				}
				b[i][j]=s+'0';
			}
		}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++) cout<<b[i][j];
		cout<<endl;
	}
	return 0;
}