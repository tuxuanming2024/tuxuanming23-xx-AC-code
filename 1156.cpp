#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[6],b[1001]={0};
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	for(int i=1;i<=6;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<=a[1];i++)
	{
		for(int j=0;j<=a[2];j++)
		{
			for(int k=0;k<=a[3];k++)
			{
				for(int l=0;l<=a[4];l++)
				{
					for(int m=0;m<=a[5];m++)
					{
						for(int n=0;n<=a[6];n++)
						{
							b[i+j*2+k*3+l*5+m*10+n*20]++;
						}
					}
				}
			}
		}
	}
	int r=0;
	for(int i=1;i<=1001;i++)
	{
		if(b[i]!=0)
		{
			r++;
		}
	}
	cout<<"TOTAL="<<r;
	return 0;
}