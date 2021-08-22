#include <iostream>
using namespace std;
int main()
{
	int n,m=1,i,j,s;
	cin>>n;
	for(i=1;i<=n;i++,m=i)
	{
		s=0;
		for(j=1;j<=5;j++)
		{
			s+=(m%10)*(m%10)*(m%10);
			m/=10;
		}	
		//cout<<s;
		if(s==i) cout<<i<<endl;
	}
	return 0;
}
