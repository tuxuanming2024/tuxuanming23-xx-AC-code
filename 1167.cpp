#include <iostream>
using namespace std;
long long f[105];
int main()
{
	int n;
    f[1]=1;
	f[2]=2;
	f[3]=4;
    for(int i=4;i<=100;i++) f[i]=f[i-1]+f[i-2]+f[i-3];
    while(cin>>n && n)
        cout<<f[n]<<endl; 
    return 0;
}