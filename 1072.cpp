#include <iostream>
using namespace std;
int main()
{
	int m[5],n,i,j,t,s=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		t=i;
		for(j=0;j<5;j++)
		{
			m[j]=t%10;
			t/=10;
			if(m[j]==1) s++;
		}
	}
	cout<<s;
	return 0;
}
