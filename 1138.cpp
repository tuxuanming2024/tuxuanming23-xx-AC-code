#include <iostream>
using namespace std;
void init(int a[]) 
{ 
    string s; 
    cin>>s;   
    a[0]=s.length();  
    for(int i=1;i<=a[0];i++) a[i]=s[a[0]-i]-'0';
} 
void print(int a[])
{
    int i;
	if(a[0]==0)
	{
		cout<<0<<endl;
		return;
	}
    for(i=a[0];i>=1;i--) cout<<a[i];
    cout<<endl;
}
void chengdan(int a[],int k)
{
	int i;
	for(i=1;i<=a[0];i++) a[i]=a[i]*k; 
	for(i=1;i<=a[0];i++)
	{
		a[i+1]+=a[i]/10;    
		a[i]%=10;
	}
	while(a[a[0]+1]>0)
	{ 
		a[a[0]+1]+=a[a[0]]/10;
		a[a[0]]=a[a[0]]%10;
		a[0]++;
	}
}
int main()
{
	int a[105]={0},b;
	init(a);
	cin>>b;
	chengdan(a,b);
	print(a);
	return 0;
}
