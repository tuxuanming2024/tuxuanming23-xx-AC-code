#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a<100)
		cout<<10<<endl;
	if(a>=100&&a<110)
		cout<<30<<endl;
	if(a>=110&&a<120)
		cout<<50<<endl;
	if(a>=120&&a<130)
		cout<<70<<endl;
	if(a>=130)
		cout<<80<<endl;
	return 0;
}
