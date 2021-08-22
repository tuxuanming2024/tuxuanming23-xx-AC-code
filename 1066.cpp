#include<iostream> 
#include<cmath> 
using namespace std; 
int main()    
{    
	int a,b,n,k,i;           
	cin>>a>>b;	 
	if(a==1)		 
		a=2;     
	for(n=a;n<=b;n++)  	 
	{ 		 
		k=sqrt(n);     
		for(i=2;i<=k;i++)		
			if(n%i==0)break;     
			if(i>=k+1)	 
			{ 	  	   		 		 
			cout<<n<<" ";
			} 
	}              
	return 0;
}
