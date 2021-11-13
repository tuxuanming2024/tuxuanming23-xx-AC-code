#include <bits/stdc++.h>
using namespace std;
int main()
{
	int l,m,a,b,c[10005],s=0;
	cin>>l>>m;
	for(int i=0;i<=l;i++) c[i]=1;
 	for(int i=1;i<=m;i++)
	{
		cin>>a>>b;
		for(int j=a;j<=b;j++) c[j]=0;	
	}  
	for(int i=0;i<=l;i++)
		if(c[i]==1) s++;
	cout<<s;
	return 0;
}
