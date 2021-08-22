#include <iostream>
using namespace std;
int main()
{
	int a,b,c,n;
	cin>>a>>b>>c;
	if(a<b)		{n=a;a=b;b=n;}
	if(a<c)		{n=a;a=c;c=n;}
	if(b<c)		{n=b;b=c;c=n;}
	cout<<a<<" "<<b<<" "<<c<<endl;
	return 0;
}
