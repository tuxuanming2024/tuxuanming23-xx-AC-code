#include <iostream>
using namespace std;
int main()
{
	string a[10];int n;
    a[0]="LING";a[1]="YI"; a[2]="ER";a[3]="SAN";a[4]="SI";
    a[5]="WU";a[6]="LIU";a[7]="QI";a[8]="BA"; a[9]="JIU";     
    cin>>n;
    if(n<0||n>99)cout<<"CUO LE";
    else if(n<10)cout<<a[n];
    else {  if(n/10!=0)cout<<a[n/10]<<" SHI ";
              if(n%10!=0)cout<<a[n%10];
            }

	return 0;
}
