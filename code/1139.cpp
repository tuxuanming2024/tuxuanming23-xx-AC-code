#include <iostream>
using namespace std;
int a[1005],b[1005],c[1005];
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
void chenggao(int a[],int b[],int c[])  
{   
    for(int i=1;i<=a[0];i++)
        for(int j=1;j<=b[0];j++) c[i+j-1]+=a[i]*b[j];
    c[0]=a[0]+b[0]; 
    for(int i=1;i<=c[0];i++)
	{
		c[i+1]+=c[i]/10;
		c[i]%=10;
	} 
    while(c[0]>0 && c[c[0]]==0) c[0]--;
}
int main()
{
	init(a);
	init(b);
	chenggao(a,b,c);
	print(c);
	return 0;
}
