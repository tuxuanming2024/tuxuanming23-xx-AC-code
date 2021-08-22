#include <iostream>
using namespace std;
int main()
{
	int a[1000],x,s=0,l=0,i,j=1;
	cin>>x;
	for(i=0;j<=x;j++)
	{
		if(x%j==0)
		{
			l++;
			a[i]=j;
			i++;
		}
	}
	for(i=0;i<l;i++)
	{
		s+=a[i];
	}	
	cout<<s<<endl;
	return 0;
}
