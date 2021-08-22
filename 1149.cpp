#include <iostream>
using namespace std;
int main()
{
	int n,a[25][25]={0},f=0,book[25][25]={0};
	int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}},x=0,y=0;
	cin>>n;
	a[0][0]=1; 
	book[0][0]=1;
	for(int i=2;i<=n*n;i++)
	{
		int tx=x,ty=y;
		x+=next[f][0];
		y+=next[f][1];
		if((x-1<0&&y+1>=n)||(x+1>=n&&y+1>=n)||(x+1>=n&&y-1<0))
		{
			f++;
			if(f>3) f=0;	
		}
		if(book[x][y])
		{
			f++;
			if(f>3) f=0;
			x=tx+next[f][0];
			y=ty+next[f][1];
		}
//		cout<<x<<' '<<y<<endl;
		book[x][y]=1;
		a[x][y]=i;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) cout<<a[i][j]<<' ';
		cout<<endl;	
	} 
	return 0;
}
