#include <iostream>
using namespace std;
int main()
{
	string s;
	int n=-1,maxn=0;
	cin>>s;
	for(int i=0;i<=s.length();i++)
	{
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
		{
			if(maxn<i-n) maxn=i-n;
			n=i;
		}	
	}
	if(maxn==0) cout<<s.length()+1;
	else cout<<maxn;
	return 0;
}