#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double e=0,n,i,j,s;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		s=1;
		for(j=i;j>0;j--)
			s*=j;
		e+=1/s;
	}
	cout<<fixed<<setprecision(10)<<e+1;
	return 0;
}
