#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double Xa,Xb,Ya,Yb;
	cin>>Xa>>Ya>>Xb>>Yb;
	cout<<fixed<<setprecision(3)<<sqrt((Xa-Xb)*(Xa-Xb)+(Ya-Yb)*(Ya-Yb))<<endl;
	return 0;
}
