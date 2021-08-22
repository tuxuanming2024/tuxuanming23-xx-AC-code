#include <iostream>
using namespace std;
int main()
{
	int a,b,c,i,j,s=0;
	cin>>a>>b>>c;
	for(i=0;j>=0;i++)
	 {
	 	if((c-(a*i))%b==0)
	 	{
	 		j=(c-(a*i))/b;
	 		if(j>=0)s++;
		}	
	 }
	cout<<s;	 
	return 0;
}