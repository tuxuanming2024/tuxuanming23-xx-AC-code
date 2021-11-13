#include <iostream>
using namespace std;
int main()
{
	int n,m,a[100],i,s=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	for(i=0;i<n;i++)
		if(a[i]==m) s++;
	cout<<s;
	return 0;
}
