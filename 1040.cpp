#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a[100],b;
	int i,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	b=0;
	for(i=0;i<n;i++)
	{
		b=b+a[i];
	}
	cout<<fixed<<setprecision(2)<<b/n<<endl;
	return 0;
}
