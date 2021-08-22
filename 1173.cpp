#include <iostream>
using namespace std;
int f[25]; 
int main()
{
	int n;
	cin>>n;
	f[0]=1;
	f[1]=3;
	for(int i=2;i<=n;i++) f[i]=f[i-1]*2+f[i-2];
	cout<<f[n]; 
	return 0;
}
