#include <iostream>
using namespace std;
int main()
{
	int n,a[3][20],i,j,b[3]={0},z=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
			cin>>a[j][i]; 
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<n;j++)
			b[i]+=a[i][j];
	}
	z+=b[0]+b[1]+b[2];
	cout<<b[0]<<' '<<b[1]<<' '<<b[2]<<' '<<z<<endl;
	return 0;
}
