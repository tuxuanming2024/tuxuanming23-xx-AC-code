#include <iostream>
#include <cstdlib>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *head,*p,*q,*t,*pt;
	int a,n,i,m;
	cin>>n;
	head=NULL;
	for(i=0;i<n;i++)
	{
		cin>>a;
		p=(struct node*)malloc(sizeof(struct node));
		p->data=a;
		p->next=NULL;
		if(head==NULL) head=p;
		else q->next=p;
		q=p;	
	}
	cin>>m;
	t=head;
	while(t!=NULL)
	{
		if(t->next->data==m) 
		{
			pt=t->next->next; 
			t->next=pt;
			break;
		}
		t=t->next;
	}
	t=head;
	while(t!=NULL)
	{
		cout<<t->data<<' ';
		t=t->next;
	}
	return 0;
}
