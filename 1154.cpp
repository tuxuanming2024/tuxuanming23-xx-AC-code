#include <iostream>
using namespace std;
int main()
{
	unsigned int a;
	cin>>a;
	cout<<(a<<16)+(a>>16);
	return 0;
}