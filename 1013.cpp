#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x1,y1,x2,y2,x3,y3,a,b,c;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	c=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
	cout<<fixed<<setprecision(2)<<sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))/4<<endl;
	return 0;
}
