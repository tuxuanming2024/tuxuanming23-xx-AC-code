#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
struct queue
{
	char data[100];
	int head;
	int tail; 
};
int main()
{
	struct queue c;
	int n,i,len,s=0,j,k,m;
	char a[100],b[7]={'A','B','C','D','E','F','G'};
	cin>>n>>a>>m;
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
	//cout<<s;
	c.head=0;
	c.tail=0;
	while(s!=0)
	{
		c.tail++;
		for(i=c.tail;i>0;i--)
			c.data[i]=c.data[i-1];
		if(s%m>=10)
			c.data[0]=b[s%m%10];
		else
			c.data[0]=s%m+48;
		s/=m;
	}
	for(i=0;i<c.tail;i++) cout<<c.data[i];
	return 0;
}
