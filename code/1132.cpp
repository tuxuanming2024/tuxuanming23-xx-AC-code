#include <iostream>
#include <iomanip>
using namespace std;
double MAX(double a,double b,double c)
{
	int t;
	if(a>b) t=a;
	else t=b;
	if(t>c) return t;
	else return c; 
}
int main()
{
	double a,b,c;
	double m;
	cin>>a>>b>>c;
	m=MAX(a,b,c)/(MAX(a+b,b,c)*MAX(a,b,b+c));
	cout<<fixed<<setprecision(3)<<m;
	return 0;
}
