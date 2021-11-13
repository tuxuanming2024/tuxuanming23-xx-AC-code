#include <iostream>
using namespace std;
int main()
{
	int n,a[100],i,j,max=0,min=999999,s,maxi=0,mini=0;
	cin>>n;
	for(i=0;i<n;i++) cin>>a[i];
	for(i=0;i<n;i++)
	{
		s=0;
		for(j=0;j<=3;j++)
		{
			if(i+j>n-1)
				s+=a[i+j-n];
			else
				s+=a[i+j];
		}
		if(s>max) {maxi=i;max=s;}
		if(s<min) {mini=i;min=s;}
		//cout<<maxi<<' '<<mini<<endl;
	}
	cout<<maxi+1<<' '<<mini+1;
	return 0;
}
