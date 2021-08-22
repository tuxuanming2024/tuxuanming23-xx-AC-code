#include <iostream>
using namespace std;
int main()
{
	int n,m,s,k=1,t=1;
	cin>>n>>m;
	s=k*(m-1);
	while(t<=n)
	{
		if(s%(m-1)!=0)
		{
			k++;
			s=k*(m-1);
			t=1;
		}
		else
		{
			s=s*m/(m-1)+1;
			t++;
		}
	}
	cout<<k*(m-1)<<endl<<s;
	return 0;
}
