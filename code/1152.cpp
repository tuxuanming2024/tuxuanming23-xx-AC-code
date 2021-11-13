#include <iostream>
using namespace std;
int main()
{
	int a[7][3];
	
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<2;j++) cin>>a[i][j];
		a[i][2]=a[i][0]+a[i][1];
	}
	for(int i=0;i<7;i++)
	{
		if(a[i][2]>8)
		{
			cout<<i+1;
			return 0;
		}
	}
	cout<<0;
	return 0;
}