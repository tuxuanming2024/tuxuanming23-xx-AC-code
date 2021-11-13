#include <iostream>
using namespace std;
int main()
{
	int n,i,a[100]={0},Max=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>a[Max]) Max=i;
	}
	cout<<a[Max]<<' '<<Max;
	return 0;
}
