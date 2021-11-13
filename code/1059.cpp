#include <iostream>
using namespace std;
int main()
{
	int n,i,a=0;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		if(i%7==0)
			a+=i;
	}
	cout<<a;
	return 0;
}
