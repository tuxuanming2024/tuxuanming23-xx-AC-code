#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<"buy="<<n*1000/45<<" "<<"left="<<n*1000%45/100.0<<endl;
	return 0;
}