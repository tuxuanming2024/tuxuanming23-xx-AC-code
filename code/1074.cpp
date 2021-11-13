#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,i,j,c;
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			c=0;
			for(j=2;j<sqrt(i);j++)
			{
				if(i%j==0)
				{
					c++;
					break;
				}
			}
			if(c==0)
			{
				c=0;
				for(j=2;j<sqrt(n/i);j++)
				{
					if(n/i%j==0)
					{
						c++;
						break;
					}
				}
				if(c==0) break;
			}
		}
	}
	cout<<n/i;
	return 0;
}
