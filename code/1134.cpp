#include <iostream>
#include <cstring>
using namespace std;
char b[100];
struct queue
{
	int data[100];
	int head;
	int tail;
};
struct queue a;
bool ish()
{
	int i,j,f=0;
	for(i=strlen(b)-1,j=0;i>=0,j<strlen(b);i--,j++)
	{
		if(b[j]!=b[i])
			f=1;	
	}
	if(f==0) return 1;
	else return 0;
}
void to_2(int n)
{
	int i=0;
	a.head=0;
	a.tail=0;
	while(n!=0)
	{
		a.tail++;
		for(i=a.tail;i>0;i--)
			a.data[i]=a.data[i-1];
		a.data[0]=n%2;
		n/=2;
	}
	return;
}
int main()
{
	int n,m,i,j,k,s=0,f1,f2,len=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=len;j++) b[len]=0;
		len=0;
		m=i;
		for(j=0;m>=1;j++)
		{
			b[j]=m%10+48;
			len++;
			m/=10;
		}
		f1=ish();
		m=i;
		to_2(m);
		for(j=0;j<a.tail;j++)
			b[j]=a.data[j]+48;
		f2=ish();
		if(f1 && f2) s++;
	}
	cout<<s;	
	return 0;
}
 