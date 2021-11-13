#include <iostream>
using namespace std;
int main()
{
	int a,i,j;
	j=0;
	cin>>a;
	for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
        {
            j++;
            break;
        }
    }
	if(j==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
