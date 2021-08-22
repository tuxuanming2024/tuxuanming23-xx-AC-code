#include <iostream>
using namespace std;
int main()
{
	int n,a[10],i,s=0;
	for(i=0;i<10;i++)
		cin>>a[i];
	cin>>n;	
	n+=30;
	for(i=0;i<10;i++)
		if(a[i]<=n) s++;
	cout<<s;
	return 0;
}
