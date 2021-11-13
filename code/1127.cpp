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
	int n,i=0;
	struct queue a;
	a.head=0;
	a.tail=0;
	cin>>n;
	while(n!=0)
	{
		a.tail++;
		for(i=a.tail;i>0;i--)
			a.data[i]=a.data[i-1];
		a.data[0]=n%2;
		n/=2;
	}
	for(i=0;i<a.tail;i++) cout<<a.data[i];
	return 0;
}
