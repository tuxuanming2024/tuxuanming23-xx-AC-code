#include <iostream>
using namespace std;
int main()
{
	int i,n,a[1000],b;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	b=a[0];
	for(i=1;i<=n;i++)
	{
		b=max(b,a[i]);
	}
	cout<<b;
	return 0;
}
