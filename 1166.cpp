#include <iostream>
using namespace std;
int f[1000005];
int main()
{
	int n,k;
	cin>>n;
	f[1]=1;
	f[2]=2;
	for(int i=3;i<=1000001;i++) f[i]=(2*f[i-1]+f[i-2])%32767;
	for(int i=1;i<=n;i++) 
	{
		cin>>k;
		cout<<f[k]<<endl;	
	} 
	return 0;
}