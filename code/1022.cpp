#include <iostream>
using namespace std;
int main()
{
	int a,i;
	i=0;
	cin>>a;
	if(a%3==0)
		cout<<"3";
		i++;
	if(a%5==0)
		if(i==0)
			cout<<"5";
		else
			cout<<" 5";
		i++;
	if(a%7==0)
		if(i==0)
			cout<<"7";
		else
			cout<<" 7";
	if(a%3!=0&&a%5!=0&&a%7!=0) 
		cout<<"n"<<endl;
	return 0;
}
