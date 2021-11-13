#include <iostream>
using namespace std;
int main()
{
	long long n,i,j,a,b=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		a=1;
		for(j=i;j>0;j--)
			a*=j;
		b+=a;
	}
	cout<<b;
	return 0;
}
