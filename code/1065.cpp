#include <iostream>
using namespace std;
int main()
{
	int n,a,i,j;
	cin>>n;
	a=n;
	for(i=0;i<n;i++,a--)
	{
		for(j=0;j<=i;j++)	cout<<' ';
		for(j=0;j<a*2-1;j++)	cout<<'*';
		for(j=0;j<=i;j++)	cout<<' ';
		cout<<endl;	
	}
	return 0;
}
