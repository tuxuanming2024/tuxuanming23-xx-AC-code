#include <iostream>
using namespace std;
int main()
{
	int i,j,a[20][20],m,b[20][20];
	cin>>m;
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			b[j][i]=a[i][j];
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
			cout<<b[i][j]<<' ';
		cout<<endl;		
	}
		
	return 0;
}
