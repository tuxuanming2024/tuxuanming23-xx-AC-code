#include <iostream>
using namespace std;
int main()
{
	int n,k,a[10000],i,j,x;
    cin>>n>>k;
    for(i=1;i<=n;i++)cin>>a[i];
    for(i=1;i<=k;i++)
    {    
		cin>>x;
        int L=1,R=n,mid;
        while(L<=R)
        {     
			mid=(L+R)/2;
            if(x==a[mid]){cout<<mid<<endl;break;}
            if(x>a[mid])R=mid-1;
            	else L=mid+1;
        } 
    }
    return 0;
}


