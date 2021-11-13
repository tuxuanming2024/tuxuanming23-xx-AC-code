#include <iostream>
#include <cmath>
using namespace std;
bool isp(int a)
{
	int i,f=0;
	for(i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			f=1;
			break;
		}
	}
	if(f==0) return 1;
	else return 0;
}
int main()
{
	int n,i;
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
		if(isp(i))
			if(isp(n-i))
			{
				cout<<i<<'+'<<n-i;
				break;
			}
	}
	return 0;
}
