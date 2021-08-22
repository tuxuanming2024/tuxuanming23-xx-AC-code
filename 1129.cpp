#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
	int n,i,len,s=0,j,k;
	char a[100],b[7]={'A','B','C','D','E','F','G'};
	cin>>n>>a;
	len=strlen(a)-1;
	for(i=len,j=0;i>0,j<=len;i--,j++)
	{
		if(a[j]>'9')
		{
			for(k=0;k<7;k++)
			{
				if(a[j]==b[k])
					break;
			}
			 s+=(k+10)*pow(n,i);
		}
		else
			s+=(a[j]-48)*pow(n,i);
	}	
	cout<<'('<<a<<')'<<n<<'='<<'('<<s<<')'<<10;
	return 0;
}
