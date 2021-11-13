#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c,d;
	cin>>a>>b>>c;
	d=(a+b+c)*(a+b-c)*(a+c-b)*(b+c-a);
	d=sqrt(d);
	cout<<fixed<<setprecision(2)<<d/4<<endl;
	return 0;
}
