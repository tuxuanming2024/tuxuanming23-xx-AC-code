#include<iostream>
using namespace std;
int main()
{
	long long x,y,z,a[1001]={0},sum=0;
	cin>>x>>y>>z;
	a[1]=1;
	for(int i=1;i<=z+1;i++)
		for(int j=1;j<=z+1;j++)
			if(i+j*x+2<=z+1) a[i+j*x+2]+=a[i]*y;
	for(int i=1;i<=z+1;i++) sum+=a[i];
	cout<<sum;
	return 0;
}