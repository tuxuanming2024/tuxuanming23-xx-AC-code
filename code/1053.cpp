#include <iostream>
using namespace std;
int main()
{
	int n,b,a=0,i=1;
	cin>>n;
	if(n<0)	
	{
		b=n;
		n=-n;
	}
	while(i<=n)
	{
		i*=10;
	}
	i/=10;
	//cout<<i<<' ';
	while(n!=0)
	{
		a+=n%10*i;
		n/=10;
		i/=10;
	}
	if(b<0)
		cout<<-a<<endl;
	else
		cout<<a<<' ';
	return 0;
}
