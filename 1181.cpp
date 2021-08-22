#include <iostream>
using namespace std;
int main()
{
	int a1,b1,a2,b2,a,b,n,i,c,maxn=1;
	cin>>a1>>b1>>a2>>b2;
	a=a1*b2+a2*b1;
	b=b1*b2;
	if(a>b) n=a;
	else n=b;
	for(int i=1;i<=n;i++)
	{
		if(a%i==0 && b%i==0)
			maxn=i;
	}
	a/=maxn;
	b/=maxn;
	if(a>=b)
	{
		n=a/b;
		a=a%b;
		if(a==0)
			cout<<n;
		else cout<<n<<'+'<<a<<'/'<<b;
	}
	else cout<<a<<'/'<<b;
	return 0;
}