#include <iostream>
using namespace std;
int m,n,k,a[100][100],b[100][100],c[100][100];
int Matrix(int x,int y)
{
	int i,s=0;
	for(i=0;i<n;i++)
		s+=a[x][i]*b[i][y];
	return s;
}
int main()
{
	int i,j;
	cin>>m>>n>>k;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++) cin>>a[i][j];
	for(i=0;i<n;i++)
		for(j=0;j<k;j++) cin>>b[i][j];
	for(i=0;i<m;i++)
	{
		for(j=0;j<k;j++) 
		{
			c[i][j]=Matrix(i,j);
			cout<<c[i][j]<<' ';	
		}
		cout<<endl;
	}	
	return 0;
}
