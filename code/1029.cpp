#include <iostream>
using namespace std;
int main()
{ 
	int a,y;
	cin>>a;
	if(a>0)
		y=a+1;
	if(a<0)
		y=a-1;
	if(a==0)
		y=0;
	cout<<y<<endl;
	return 0;
}
