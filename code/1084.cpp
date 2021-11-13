#include <iostream>
using namespace std;
int tzfz(int n)
{
	int a,b;
	if(n==1 || n==2 || n==3)
		return 1;
	else 
	{
		a=tzfz(n-1);
		b=tzfz(n-3);
		return a+b;
	} 
} 
int main()
{
	int n;
	cin>>n;
	cout<<tzfz(n);
	return 0;
}
