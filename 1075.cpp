#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long n,i,j,s=0,c;
	cin>>n;
	for(i=2;s!=n;i++)
	{
		c=0;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				c++;
				break;
			}		
		}
		if(c==0)
			s++;	
	}
	cout<<i-1; 
	return 0;
}
