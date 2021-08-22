#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a[10],x,y,z=0;
	int i;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	x=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]<x)
			x=a[i];
	}
	y=a[0];
	for(i=0;i<10;i++)
	{
		if(y<a[i])
			y=a[i];
	}
	for(i=0;i<10;i++)
	{
		if(a[i]!=x&&a[i]!=y)
			z+=a[i];
	}
	cout<<fixed<<setprecision(2)<<z/8.0<<endl;
	return 0;
}
