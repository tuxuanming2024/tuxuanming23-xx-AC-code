#include <iostream>
using namespace std;
int main()
{
	int i;
	double h,s=0;
	cin>>h;
	for(i=0;i<10;i++)
	{
		s+=h;
		h=h/2;
		s+=h;
	}
	s-=h;
	cout<<s<<endl<<h<<endl;
	return 0;
}
