#include<iostream>
using namespace std;
int main()
{
	int a[100]={0},i=1,j,k=0,m,n,f;	
	cin>>n>>m;	
	while(1)	
	{			
		f=0;	
		if(i>n) i=1;		
		if(a[i]==0) k++;		
		if(k==m)		
		{			
			k=0;			
			cout<<i<<" ";			
			a[i]=1;					
 		}
		i++;
		for(j=1;j<=n;j++) 
			if(a[j]==0) f=1;	
		if(f==0)
			break;		
	}	
	return 0;
}