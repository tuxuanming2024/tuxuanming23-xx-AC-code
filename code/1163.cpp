#include <iostream>
using namespace std;
int f[1005]={0,1,3};
int main()
{
	int n;
	cin>>n;
	for(int i=3;i<=n;i++) f[i]=(2*f[i-2]+f[i-1])%12345;
	cout<<f[n];
	return 0;
}