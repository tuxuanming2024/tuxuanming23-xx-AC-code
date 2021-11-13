#include <iostream>
using namespace std;
int a[100][100],b[100][100],m,n;
int average(int x,int y)
{
	double s1;
	int s2;
	s1=a[x-1][y] + a[x+1][y] + a[x][y-1] + a[x][y+1] + a[x][y];
	s1/=5;
	s2=s1*10;
	if(s2%10>=5) s2+=(10-(s2%10));
	if(s2%10<=4) s2-=(s2%10);
	return s2/10;	
}
int main()
{
	int i,j;
	cin>>n>>m;
	
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
			b[i][j]=a[i][j];	
		} 
		
	for(i=1;i<n-1;i++)
		for(j=1;j<m-1;j++)
			b[i][j]=average(i,j);
			
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++) cout<<b[i][j]<<' ';
		cout<<endl;
	}
	return 0;
}
