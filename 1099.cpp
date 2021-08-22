#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a[20][3],s[20]={0};
	int i,j,n;
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<3;j++)
			cin>>a[i][j];
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			s[i]+=a[i][j];
		}
		s[i]/=3;
	}
	for(i=0;i<n;i++)
		cout<<fixed<<setprecision(2)<<s[i]<<' ';	
	return 0;
}
