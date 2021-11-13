#include <iostream>
using namespace std;
int main()
{
	int a[1000], b[1000], n, i, s = 0;
	cin>>n;
	for(i = 0; i < n; i++)
		cin>>a[i];
	for(i = 0; i < n; i++)
		cin>>b[i];
	for(i = 0; i < n; i++)
		s += a[i] * b[i];
	cout<<s;
	return 0;
}
