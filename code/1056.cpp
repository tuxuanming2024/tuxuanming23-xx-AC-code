#include <iostream>
using namespace std;
int main()
{
	int a,b,c,t;
	cin>>a>>b;
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	c=a%b;
	while(c!=0)
	{
		a=b;
		b=c;
		c=a%b;
	}
	cout<<b<<endl;
	return 0;
}
