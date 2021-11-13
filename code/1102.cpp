#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char a[200];
	int len,i,s=0;
	cin>>a;
	len=strlen(a);
	for(i=0;i<len;i++)
		s+=a[i]-'0';
	cout<<s;
	return 0;
}
