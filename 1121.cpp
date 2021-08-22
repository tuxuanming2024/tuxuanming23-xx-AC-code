#include <iostream>
using namespace std;
int main()
{
	int a[100],book[100]={0},i,j,n,m,f,k=0;
	cin>>n>>m;
	for(i=0;i<n;i++) cin>>a[i];
	for(i=0;;i++)
	{
		if(i>=n) i=0;
		f=0;
		if(book[i]==0) k++;
		if(k==m)
		{
			book[i]=1;
			cout<<i+1<<' ';
			m=a[i];
			k=0;
		}
		for(j=0;j<n;j++)
		{
			if(book[j]==0)
			{
				f=1;
				break;	
			}	
		}
		if(f==0) break;
	}
	return 0;
}
