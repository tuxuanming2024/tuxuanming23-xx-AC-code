#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
	char a[100];
	int maxn=0,minn=99999,i,j,len,b[123]={0},f=0;
	cin>>a;
	len=strlen(a);
	for(i=0;i<len;i++)
		b[(int)a[i]]+=1;
		//for(i=97;i<123;i++)cout<<b[i]<<' ';
	for(i=97;i<123;i++)
	{
		if(maxn<b[i])
			maxn=b[i];
		if(b[i]!=0&&minn>b[i])
			minn=b[i];
		//cout<<maxn<<' '<<minn<<' ';
	}
 	//cout<<maxn<<' '<<minn<<' ';
	if((maxn-minn)==1 || (maxn-minn)==0)
	{
		f=1;
		cout<<"No Answer"<<endl<<0;
	}
	for(i=2;i<=sqrt(maxn-minn);i++)
	{
		if((maxn-minn)%i==0)
		{
			cout<<"No Answer"<<endl<<0;
 			f=1;
		}
	}
	if(f!=1)
		cout<<"Lucky Word"<<endl<<maxn-minn;
	return 0;
}