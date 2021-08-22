#include <iostream>
using namespace std;
int main()
{
	int a,b,m,n,c,t;
	cin>>a>>b;
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	c=a%b;
	m=a;
	n=b;
	while(c!=0)
	{
		a=b;
		b=c;
		c=a%b;
	}
	cout<<m*n/b<<endl;
	return 0;
}
