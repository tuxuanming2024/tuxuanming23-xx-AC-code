#include <iostream>
using namespace std;
int main()
{
	int a,b,c,g;
	cin>>a>>b>>c;
	g=b*b-4*a*c;
	if(g>=0)
		cout<<"YES"<<endl;
	else
		cout<<"NO SOLUTION"<<endl; 
	return 0;
}
