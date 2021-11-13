#include <iostream>
using namespace std;
int main()
{
	int n,m,a[10005],s=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int k=m;
	while(k<n)
	{
		int minn=999999;
		for(int i=1;i<=m;i++)
			if(a[i]<minn) minn=a[i];
		for(int i=1;i<=m;i++)
		{
			a[i]-=minn;
			if(a[i]==0) a[i]=a[++k];
		}
		s+=minn;
	}
	int maxn=-1;
	for(int i=1;i<=m;i++)
		if(a[i]>maxn) maxn=a[i];
	cout<<s+maxn;
	return 0;
}