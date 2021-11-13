#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char a[101],b[101],c;
	int n,i;
	cin>>a;
	cin>>n>>c;
	for(i=0;i<strlen(a);i++)
	{
		if(c=='R')
			if(a[i]-n<65)
				b[i]=91-(65-(a[i]-n));
			else
				b[i]=a[i]-n;
		if(c=='L')
			if(a[i]+n>90)
				b[i]=a[i]+n-90+64;
			else
				b[i]=a[i]+n;
	} 
	for(i=0;i<strlen(a);i++)
		cout<<b[i];
	return 0;
}

