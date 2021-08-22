#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    int i=1,j=1,a[100],c[100],tt;
    double t,b;
    cin>>t;
    tt=t;
    b=t-tt;
    for(;tt!=0;i++)
    {
    	a[i]=tt%2;
    	tt=tt/2;
	}
	for(;b!=0;j++)
	{
		c[j]=b*2;
		b=b*2-c[j];
	}
	for(int h=i-1;h>=1;h--)
	{
		cout<<a[h];
	}
	cout<<".";
	if(j-1>=20)
	{
		for(int m=1;m<=20;m++)
	    {
		    cout<<c[m];
	    }
	}
	else
	{
		for(int m=1;m<=j-1;m++)
	    {
		    cout<<c[m];
	    }
	} 
	
	return 0;
}