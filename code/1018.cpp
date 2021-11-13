#include <iostream>
using namespace std;
int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	if(y%x==0)
		cout<<n-y/x<<endl;
	else
		cout<<n-(y/x+1)<<endl;
	return 0;
}