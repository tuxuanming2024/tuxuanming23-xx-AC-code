#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	cout<<x/3600<<" ";
	x=x%3600;
	cout<<x/60<<" ";
	x=x%60;
	cout<<x;
	return 0;
}
