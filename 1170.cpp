#include<iostream>
using namespace std; 
int f[25];
int main()
{
	int n;
	cin>>n;
	f[1]=1;
	f[2]=2;
	for(int i=3;i<=n;i++) f[i]=f[i-1]+f[i-2];
	cout<<f[n];
}