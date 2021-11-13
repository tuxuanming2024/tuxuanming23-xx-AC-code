#include <iostream>
using namespace std;
int main()
{
	int n,a[100],s=0;
	int i,k=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	if(a[0]<a[1]) k=0;
	if(a[0]>a[1]) k=1;
	for(i=1;i<n-1;i++)
	{
		if(k==0)
		{
			if(a[i]>a[i+1])
			{
				s+=1;
				k=1;	
			}		
		}
		if(k==1)
		{
			if(a[i]<a[i+1])
			{
				s+=1;
				k=0;
			}	
		}
		//cout<<a[i]<<' '<<a[i+1]<<' '<<k<<' '<<s<<endl;
	}
	cout<<s+1;
	return 0;
}
