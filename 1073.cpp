#include <iostream>
using namespace std;
int main()
{
	int l,r,i,j,k,s=0,m,t=1;
	cin>>l>>r;
	for(i=l;i<=r;i++)
	{
		t=i;
		for(j=0;j<5;j++)
		{
			m=t%10;
			t/=10;
			if(m==2) s++;
		}
	}
	cout<<s;
	return 0;
}
