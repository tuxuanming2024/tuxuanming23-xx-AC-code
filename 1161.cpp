#include<iostream>
using namespace std;
int a[10005],b[10005],g[10005],k[10005];
int main()
{
	int n,x,y,s=-1;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i]>>g[i]>>k[i];
	cin>>x>>y;
	for(int i=1;i<=n;i++)
		if(x>=a[i] && x<=a[i]+g[i] && y>=b[i] && y<=b[i]+k[i])
			s=i;
	cout<<s<<endl;
	return 0;
}