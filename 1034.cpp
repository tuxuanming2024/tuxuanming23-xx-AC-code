#include <iostream>
using namespace std;
int main()
{
	int a,b;
	char c;
	cin>>a>>b;
	if(a%4==0&&a%100!=0)
		c='Y';
	else
		if(a%100==0&&a%400==0&&a%3200!=0)
			c='Y';
		else
			c='N';
		if(a%3200==0)
			c='N';
	if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
		cout<<31<<endl;
	if(b==4||b==6||b==9||b==11)
		cout<<30<<endl;
	if(b==2&&c=='N')
		cout<<28<<endl;
	if(b==2&&c=='Y')
		cout<<29<<endl;
	return 0;
}
