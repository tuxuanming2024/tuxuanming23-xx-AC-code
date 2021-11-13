#include <iostream>
using namespace std;
int main()
{
	int n;
	char j,i;
	cin>>n; 
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>0;j--)
			cout<<' ';
		for(j='A';j<i+65;j++)
			cout<<j;
		for(j=j-2;j>64;j--)
			cout<<j;
		cout<<endl;	
	}
	return 0;
}
