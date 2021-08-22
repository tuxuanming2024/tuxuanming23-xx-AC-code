#include <iostream>
using namespace std;
int main()
{
	int n,i,s=1;
	cin>>n;
	for(i=1;i<n;i++)
	{
		s+=1;
		s*=2;
	}
	cout<<s;
	return 0;
}
