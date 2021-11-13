#include <iostream>
using namespace std;
int main()
{
	int i,j,maxx,b,n,a[20][20];
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	for(i=1;i<=n;i++)            
	{ 
		maxx=a[i][1];
		b=1;
		for(j=2;j<=n;j++)                   
			if(a[i][j]<maxx)
			{maxx=a[i][j];b=j;}
		for(j=1;j<=n;j++)
			if(maxx<a[j][b])  break;     
		if(j>n)cout<<"("<<i<<","<<b<<")"<<endl;
	}
	return 0;
}
