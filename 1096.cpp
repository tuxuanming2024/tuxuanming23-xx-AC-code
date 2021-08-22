#include <iostream>
using namespace std;
int main()
{
	int m,n,a[100][100],i,j,maxi,maxj;
	cin>>m>>n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	maxi=0;
	maxj=0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			if(a[i][j]>a[maxi][maxj])
			{
				maxi=i;
				maxj=j;
			}
		}
	cout<<a[maxi][maxj]<<' '<<maxi+1<<' '<<maxj+1;
	return 0;
}
