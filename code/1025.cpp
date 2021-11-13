#include <iostream>
using namespace std;
int main()
{
	int a,b,c,i;
	cin>>a>>b>>c;
	if(a>b)
		i=a;
	else
		i=b;
	if(i<c)
		cout<<c<<endl;
	else
		cout<<i<<endl;
	return 0;
}
