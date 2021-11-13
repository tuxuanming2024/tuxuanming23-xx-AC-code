#include <iostream>
using namespace std;
int main()
{
	int a=0,n;
	cin>>n;
	while(n!=0)
	{
		a+=n%10;
		n=n/10;
	}
	cout<<a;
	return 0;
}
