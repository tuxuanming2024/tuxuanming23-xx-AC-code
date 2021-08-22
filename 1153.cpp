#include <iostream>
using namespace std;
int main()
{
	int a,s=0,n=0;
	for(int i=1;i<=12;i++)
	{	
		s+=300;
		cin>>a;
		if(s-a<0)
		{
			cout<<-i;
			return 0;
		}
		n+=(s-a)/100;
		s=(s-a)%100;
	}
	cout<<n*120+s;
	return 0;
}