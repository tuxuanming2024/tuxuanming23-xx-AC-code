#include <iostream>
using namespace std;
int main()
{
	long long n,a[1000],i,j,left,right,s=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		left=0;
		right=0;
		for(j=0;j<i;j++)
			if(a[j]>a[i]) left++;
		for(j=i+1;j<=n;j++)
			if(a[j]>a[i]) right++;
		if(left==right) s++;
	}
	cout<<s;
	return 0;
}
