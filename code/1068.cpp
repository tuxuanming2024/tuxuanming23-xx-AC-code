#include <iostream>
using namespace std;
int main()
{
	double x,y,z,n;
	int i,j,l;
	cin>>x>>y>>z;
	for(i=1;i<=98;i++)
		for(j=1;j<=98;j++)
		{
			l=100-i-j;
			if((l>=1)&&(i*x+j*y+l*z==100))	
				cout<<i<<' '<<j<<' '<<l<<endl;
		}
	return 0;
}
