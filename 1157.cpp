#include <iostream>
using namespace std;
int fun(int x)
{
	int num=0;
	int f[10]={6,2,5,5,4,5,6,3,7,6};
	while(x/10!=0)
	{
		num+=f[x%10];
		x=x/10;
	}
	num+=f[x];
	return num;
}
int main()
{
	int a,b,c,n,sum=0;
	cin>>n;
	
	for(a=0;a<1111;a++)
	{
		for(b=0;b<1111;b++)
		{
			c=a+b;
			if(fun(a)+fun(b)+fun(c)==n-4) sum++;	
		}	 
	}
	cout<<sum;	
	return 0;
}