#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string a[100],t;
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{t=a[i];a[i]=a[j];a[j]=t;}
		}
	for(i=0;i<n;i++)
		cout<<a[i]<<endl;
	return 0;
}
