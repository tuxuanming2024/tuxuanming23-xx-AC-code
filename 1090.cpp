#include <iostream>
using namespace std;
int main()
{
	long long n,k,i,a[1000000],s=0;
	cin>>n;
	for(i=0;i<n;i++) cin>>a[i];
	cin>>k;
	for(i=0;i<n;i++)
		if(a[i]==k) s++;
	cout<<s;
	return 0;
}
