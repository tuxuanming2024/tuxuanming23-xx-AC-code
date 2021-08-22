#include <iostream>
using namespace std;
int main()
{
	double s=1,n=1,m;
	cin>>m;
	while(s<=m)
	{
		n++;
		s=s+(1/n);
	}
	cout<<n-1<<endl;
	return 0;
}
