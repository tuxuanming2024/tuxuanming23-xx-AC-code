#include <iostream>
using namespace std;
int main()
{
	int n,i,a[100],s;
	cin>>n;
	for(i=0;i<n-1;i++)
	{
		cin>>a[i];
	}
	s=(n-2)*180;
	for(i=0;i<n-1;i++)
	{
		s-=a[i];
	}
	cout<<s<<endl;
	return 0;
}
