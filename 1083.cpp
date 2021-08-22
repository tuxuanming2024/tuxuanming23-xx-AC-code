#include <iostream>
using namespace std;
int main()
{
	long long n,i,a[100];
	cin>>n;
	a[1]=0;
	a[2]=1;
	for(i=3;i<=n;i++)
		a[i]=a[i-1]+a[i-2];
	cout<<a[n];
	return 0;
}
