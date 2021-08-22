#include <iostream>
using namespace std;
int main()
{
	int n,m1,m2,i,j,s=0; 
	cin>>n;
	for(i=1;i<=n;i++)
	{
		m1=i%10;
		m2=i/10%10;	
		if(i%7!=0&&m1!=7&&m2!=7)
			s+=i*i;
	} 
	cout<<s;
	return 0;
}
