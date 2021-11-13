#include <iostream>
using namespace std;
int main()
{
	int a=0;
	char ch;
	cin>>ch;
	while(ch!='#')
	{
		if(ch=='a'||ch=='A')
		{
			a++;
		}	
		cin>>ch;
	}
	cout<<a<<endl;
	return 0;
}
