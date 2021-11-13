#include <iostream>
using namespace std;
int main()
{
	int a,b,i,n=0;
	cin>>a>>b;
	for(i=a;i<=b;i++)
	{
		if(i%2!=0)
			n+=i;	
	} 
	cout<<n<<endl;
	return 0;
}
