#include <iostream>
using namespace std;
int main()
{
	int a[10005]={0},t,i,j,n,s1,s2=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>t;
		a[t]++;
	}
	for(i=10005;i>=1;i--)
		if(a[i]!=0) {cout<<a[i]<<' ';s1=i;break;}		
	for(i=10005;i>=1;i--)
		if(a[i]!=0&&i!=s1) {cout<<a[i]<<' ';break;}
	for(i=1;i<=10005;i++)
		if(a[i]!=0) s2++;
	cout<<s2;
}
