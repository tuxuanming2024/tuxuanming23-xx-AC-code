#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n,i,j,c,a[100]={0},Max;
	char ch;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>ch;
		c=0;
		while(ch!='E')
		{	
			if(ch=='Y') {c++;a[i]++;}
			if(ch=='N') c=0;
			if(c==3) {a[i]++;c=0;}
			cin>>ch;
		}
	}
	Max=0;
	for(i=1;i<n;i++)
	{
		if(a[Max]<a[i]) Max=i;
	}
	cout<<Max+1<<endl<<a[Max];
	return 0;
}
