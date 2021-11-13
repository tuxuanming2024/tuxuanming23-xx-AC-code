#include <iostream>
using namespace std;
int main()
{
	int a,c;
	char b;
	cin>>a>>b;
	if(a>1000)
	a-=1000;
		if(a%500!=0) 
			c=a/500+1;
			c=c*4;
		if(a%500==0)
			c=a/500*4;
	if(b=='y')
		cout<<8+c+5<<endl;
	if(b=='n')
		cout<<8+c<<endl;
	return 0;
}
