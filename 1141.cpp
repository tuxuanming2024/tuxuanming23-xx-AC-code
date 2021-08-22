#include<iostream>
#include<cstring>
using namespace std;
void Read(int a[])
{
	string s;
	cin>>s;
	int i;
	a[0]=s.length();
	for(i=1;i<=a[0];i++)
	a[i]=s[a[0]-i]-'0';
}
void change(int tem[],int b[],int i)
{
	for(int k=1;k<=b[0];k++)tem[i+k-1]=b[k];
    tem[0]=i+b[0]-1;
}
int compare(int a[],int tem[])
{
	if(a[0]>tem[0])return 1;
	if(a[0]<tem[0])return -1;
	for(int i=a[0];i>=1;i--)
	{
		if(a[i]>tem[i])return 1;
		if(a[i]<tem[i])return -1;
	}
	return 0;
}
void Jian(int a[],int b[],int d[])
{
	int i;
	for(i=1;i<=a[0];i++)
    {
    	if(a[i]<b[i]){a[i]+=10;a[i+1]--;}
    	a[i]=a[i]-b[i];
    }
    while(a[a[0]]==0&&a[0]!=0)a[0]--;
    for(i=a[0];i>=0;i--)d[i]=a[i];
}
void Chu(int a[],int b[],int c[],int d[])
{
	int tem[105];
	c[0]=a[0]-b[0]+1;
	for(int i=c[0];i>=1;i--)
	{
	    memset(tem,0,sizeof(tem));
		change(tem,b,i);
		while(compare(a,tem)>=0){c[i]++;Jian(a,tem,d);}
	}
		while(c[c[0]]==0&&c[0]!=0)c[0]--;
}
void Print(int c[])
{
	int i;
	for(i=c[0];i>=1;i--)cout<<c[i];
	if(c[0]==0){cout<<0<<endl;return;}
	cout<<endl;
}
int main()
{
	int a[105]={0},b[105]={0},c[105]={0},d[105]={0},k;
	Read(a);
	Read(b);
	Chu(a,b,c,d);
	Print(c);
	Print(d);
	return 0;
}