#include <iostream>
#include <malloc.h>
using namespace std;
struct sd
{
	int source;
	int nianji;
};
struct sd *p,t;
int main()
{
	int n,i,j,s;
	cin>>n;
	p=(struct sd*)malloc(n*sizeof(struct sd));
	for(i=0;i<n;i++)
		cin>>p[i].source>>p[i].nianji;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i].source<p[j].source)
			{t=p[i];p[i]=p[j];p[j]=t;}
			if(p[i].source==p[j].source)
			{if(p[i].nianji>p[j].nianji){t=p[i];p[i]=p[j];p[j]=t;}}
		}	
	} 
	for(i=0;i<n;i++)
	{
		s=0;
		if(i!=0)
		{
			for(j=0;j<i;j++)
				if(p[i].nianji>p[j].nianji) s++;
		}
		cout<<s<<endl;
	}
	return 0;
}
