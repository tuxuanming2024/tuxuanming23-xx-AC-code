#include <iostream>
using namespace std;
struct queue
{
	int data[100];
	int head;
	int tail;
};

int main()
{
	struct queue a;
	int n,i;
	a.head=0;
	a.tail=0;
	cin>>n;
	a.data[0]=n;
	for(n--;n>0;n--)
	{
		a.tail++;
		for(i=a.tail;i>0;i--)
			a.data[i]=a.data[i-1];
		a.data[0]=n;
		if(n==1) break;
		for(i=a.tail+2;i>1;i--)
			a.data[i]=a.data[i-2];
		a.data[0]=a.data[a.tail+1]; 
		a.data[1]=a.data[a.tail+2];
	}
	for(i=0;i<=a.tail;i++) cout<<a.data[i]<<' '; 
	return 0;
}