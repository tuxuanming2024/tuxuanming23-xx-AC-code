#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double x,n,i;
	cin>>x>>n;
	for(i=0;i<n;i++)
	{
		x+=x/1000;
	}
	cout<<fixed<<setprecision(4)<<x<<endl;
	return 0;
}