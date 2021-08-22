#include <iostream>
using namespace std;
struct queue
{
	char data[100];
	int head;
	int tail; 
};
int main()
{
	int n,m,i=0,b;
	char c[7]={'A','B','C','D','E','F','G'};
	struct queue a;
	a.head=0;
	a.tail=0;
	cin>>n>>m;
	b=n;
	while(n!=0)
	{
		a.tail++;
		for(i=a.tail;i>0;i--)
			a.data[i]=a.data[i-1];
		if(n%m>=10)
			a.data[0]=c[n%m%10];
		else
			a.data[0]=n%m+48;
		n/=m;
	}
	cout<<'('<<b<<')'<<10<<'='<<'(';
	for(i=0;i<a.tail;i++) cout<<a.data[i];
	cout<<')'<<m;
	return 0;
}
