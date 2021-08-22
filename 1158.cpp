#include<cstdio>
int a[200001],f[200001];
int main()
{
	int m,n,i,x,y;
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++) 
	{
		scanf("%d",&a[i]); 
		f[i]=f[i-1]+a[i];
	}
    for(i=1;i<=n;i++)
    {
    	scanf("%d%d",&x,&y);
    	printf("%d\n",f[y]-f[x-1]);
	}
	return 0;
}