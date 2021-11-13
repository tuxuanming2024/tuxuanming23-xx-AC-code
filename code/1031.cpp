#include <iostream>
using namespace std;
int main()
{
	char a,b;
	cin>>a>>b;
	if(a=='S'&&b=='P'||a=='P'&&b=='R'||a=='R'&&b=='S')
		cout<<"Win"<<endl;
	else
		if(a==b)
			cout<<"Equ"<<endl;
		else
			cout<<"Fail"<<endl;
	return 0;
}