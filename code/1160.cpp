#include <iostream>
using namespace std;
int main()
{
	int n,a[100],s=0,book[100]={0};
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			for(int k=0;k<n;k++)
				if(a[k]!=a[j] && a[k]!=a[i] && a[i]!=a[j])
					if(a[j]+a[k]==a[i] && book[i]==0)
					{
						s++;
						book[i]=1;
					} 
	cout<<s;
	return 0;
}