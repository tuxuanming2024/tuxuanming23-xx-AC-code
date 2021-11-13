#include <iostream>
#include <cstring>
#include <cmath> 
using namespace std;

char c[100];
int len;
bool huiwen(void)
{
	int s=0;
	for(int i=0,j=len-1;i<j;i++,j--)
	{
		if(c[i]!=c[j])
		{
			s++;
			break;
		}	
	}
	if(s==0) return true;
	else return false;
}
int main()
{
	//1.输入字符
	char a[100],b[100];
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
		a[i]-='0';
	}
	len=strlen(a);
	int s=1; 
	while(1)
	{
		//2.倒序 
		for(int i=len-1,j=0;i>=0,j<len;i--,j++)
		{
			b[i]=a[j];	
		}
		//3.相加
		
		for(int i=0;i<len;i++)
			c[i]=b[i]+a[i];
		
		for(int i=len-1-1;i>=0;i--)
		{
			if(c[i+1]>=10)
			{
				c[i]+=1;
				c[i+1]-=10;
				//cout<<(int)c[i+1]<<' ';	
			}
		}
		if(c[0]>=10)
		{
			for(int i=len;i>0;i--)
			{
				c[i]=c[i-1];
			}
			c[0]=1;
			c[1]-=10; 
			len++;
		}
		//4.判断 
		if(huiwen())
		{
			cout<<s;
			break;	
		} 
		else
		{
			for(int i=0;i<len;i++)
				a[i]=c[i];
		}
		
		if(len>=15)
		{
			cout<<"Fail!";
			break;	
		} 
		s++;
	}
	return 0;
}
