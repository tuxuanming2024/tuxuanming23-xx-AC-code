#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a,b;
	char c;
	cin>>a>>b>>c;
	if(c=='+')
		cout<<fixed<<setprecision(1)<<a+b<<endl;
	if(c=='-')
		cout<<fixed<<setprecision(1)<<a-b<<endl;
	if(c=='*')
		cout<<fixed<<setprecision(1)<<a*b<<endl;
	if(c=='/'&&b!=0)
		cout<<fixed<<setprecision(1)<<a/b<<endl;
		else
			if(b==0)
				cout<<"error"<<endl;
	return 0;
}
