
#include<iostream>
#include<cstring>
using namespace std;
int n,m,t;
int a[10005];
int yx(int a)
{
	return (a*a*a)%5+1;
}
void down(int x,int end)
{
	for(int i=x;i<=end;i++)
	{
		a[i]=a[i+1];
		}
}
int main()
{
	cin>>n>>m;
	int last;
	int step=1;
	t=n;
	for(int i=1;i<=n;i++)
	a[i]=i; 
	for(int i=1;i<=m;i++)
	{
		int s;
		s=yx(i);//跳过个数
		if(step+s<=t)//若没有超出界限
		{
		    last=step+s;//所吃果子的位置
		    step+=s;
		    if(i!=m)
			{t--;//最高点位置坐标——因下坠一个，所以最高点个数也下坠一个
		    down(step,t);//数组下坠
				}
			}
		else//若超出界限
		{
			step=1;//跳到最底下第一个果子
		    last=step+s;
		    step+=s;
		    if(i!=m)
			{
				t--;
		    down(step,t);
				}
			}
		}
	cout<<a[last]<<endl;
	return 0;
}