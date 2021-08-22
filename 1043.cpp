#include <iostream>
using namespace std;
int main()
{
	int n,c[1000],i,a,b;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>c[i];
	}
	a=c[0];
	for(i=1;i<n;i++)
	{
		if(a<c[i])
			a=c[i];
	}
	b=c[0];
	for(i=1;i<n;i++)
	{
		if(b>c[i])
			b=c[i];
	}
	cout<<a-b<<endl;
	return 0;
}
