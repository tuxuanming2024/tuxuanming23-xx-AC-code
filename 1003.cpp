#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const double pi=3.1415926;
	int a;
	cin>>a;
	cout<<fixed<<setprecision(2)<<2*a*pi<<" "<<pi*a*a<<endl;
	return 0;
}