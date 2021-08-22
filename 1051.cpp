#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	while(a!=1)
	{
		if(a%2==0&&a!=1)
		{
			cout<<a;
			a=a/2;
			cout<<"/2="<<a<<endl;
		}
		if(a%2!=0&&a!=1)
		{	
			cout<<a;
			a=a*3+1;
			cout<<"*3+1="<<a<<endl;	
		}
	}
	cout<<"End"<<endl;
	return 0;
}
