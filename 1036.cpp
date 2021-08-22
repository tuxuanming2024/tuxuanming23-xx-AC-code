#include <iostream>
using namespace std;
int main()
{
	int a;
	double b,c;
	cin>>a;
	b=a/1.2;
	c=27+a/3.0+23;
	if(c>b)
		cout<<"Walk"<<endl;
	if(c<b)
		cout<<"Bike"<<endl;
	if(c==b)
		cout<<"All"<<endl;
	return 0;
}
