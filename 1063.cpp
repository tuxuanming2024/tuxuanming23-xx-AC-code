#include <iostream>
using namespace std;
int main()
{
	double n,k,i,a=200,m=0;
	cin>>n>>k;
	for(i=0;m<a&&i<=20;i++)
	{
		a+=a*0.01*(k-1);
		m+=n;
		//cout<<m<<"and"<<a<<' ';
	}
	if(i<=20)	cout<<i<<endl;
	else	cout<<"Impossible"<<endl;
	return 0;
}
