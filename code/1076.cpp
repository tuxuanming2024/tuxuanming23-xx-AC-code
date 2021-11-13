#include <iostream>
using namespace std;
int main()
{
	long long n,k=1,i,j,s=0;
	cin>>n;
	for(i=1;i<=n;)//发放的天数不超过总天数 
	{
		for(j=1;j<=k;j++)//重复天数次发放天数个金币 
		{
			i++;//天数++ 
			s+=k;//汇总金币 
			if(i>n)
			{
				cout<<s;
				return 0;
			}
		}
		k++;//金币数++ 
	}
	cout<<s;
	return 0;
}
