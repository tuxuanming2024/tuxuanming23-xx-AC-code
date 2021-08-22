#include <iostream>
using namespace std;
int a[1005],b,c[1005],d;
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
void chudan(int a[],int b,int c[],int d)
{    
    d=0;
    for(int i=a[0];i>=1;i--)
    {   
		d=d*10+a[i];
        c[i]=d/b;
        d=d%b;
    }
    c[0]=a[0];
    while(c[0]>0&&c[c[0]]==0) c[0]--;
} 
int main()
{
	init(a);
	cin>>b;
	chudan(a,b,c,d);
	print(c);
	return 0;
}
