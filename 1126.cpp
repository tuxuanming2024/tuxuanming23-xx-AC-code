#include <iostream>
using namespace std;
int main()
{
	int n,a[10000],b[10000],i,j,t,f=0;
	cin>>n;
	cin>>a[0];
	for(i=1;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i-1]-a[i];
		if(b[i]<0) b[i]=-b[i];
	}
	//for(i=1;i<n;i++) cout<<b[i]<<' ';
	for(i=1;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[i]<b[j])
			{t=b[i];b[i]=b[j];b[j]=t;}
		}	
	} 
	//for(i=1;i<n;i++) cout<<b[i]<<' ';
	if(b[1]!=n-1 || b[n-1]!=1) cout<<"Not jolly";
	else
	{
		for(i=2;i<n;i++)
		{	
			if(b[i-1]-b[i]!=1)
			{
				f=1;
				break;
			}
		}
		if(f==0) cout<<"Jolly";
		else cout<<"Not jolly";
	}
	return 0;
}
