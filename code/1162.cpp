#include <iostream>
using namespace std;
int main()
{
	int x,y,a[13]={0,31,29,31,30,31,30,31,31,30,31,30,31},sum=0;
	cin>>x>>y;
	for(int i=1;i<=12;i++)
		for(int j=1;j<=a[i];j++)
		{
			int k=(j%10)*1000+(j/10)*100+(i%10)*10+(i/10);
			int s=k*10000+i*100+j;
			if(x<=s && s<=y) sum++;
		}
	cout<<sum;
	return 0;
}