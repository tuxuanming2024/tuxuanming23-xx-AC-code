#include <iostream>
using namespace std;
int main()
{
	int i,n;
	long long s=1;
	cin>>n;
	for(i=1;i<=n;i++)	
	{
		s=s*i;
	}
	cout<<s<<endl;
	return 0;
}
