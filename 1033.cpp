#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a>=86) cout<<"VERY GOOD";
	if(a<86&&a>=60) cout<<"GOOD";
	if(a<60) cout<<"BAD";
	return 0;
}
