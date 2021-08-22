
#include<cstdio>
#include<cctype>
#include<cstring>
#include<cstdlib>
 
int n,a[2][100];
char s[100];
 
bool huiwen (int x)//如果一直相等，就返回1，一旦不相等就返回0
{
	int i,j=a[x][0];
	for(i=1;i<j;i++,j--)
		if(a[x][i]!=a[x][j])
			return 0;
		return 1;
}
void readdata()
{
	int i,j,k;
	scanf("%d%s",&n,s);
	k=strlen(s);
	for(i=k-1;i>=0;i--)
	{
	  if(isdigit(s[i]))j=s[i]-'0';
	  if(islower(s[i]))j=s[i]-'a'+10;     //如果是字母，无论小写，大写，进行十进制存储
	  if(isupper(s[i]))j=s[i]-'A'+10;
	  a[0][++a[0][0]]=j;        //a[0][0]用来存储数字的位数，其后存储字符在十进制中的意思
	}
	if(huiwen(0))
	{
		printf("STEP=0\n");
		exit(0);
	}
}
 
void add(int x)                             //x为1,0,1,0,1。。
{						//y为0,1,0,1,0。。
	int i,j,last,y=1-x;
	a[x][0]=a[y][0];			//a[y][0],表示数字的长度
	last=0;	
	for(i=1;i<=a[y][0];i++)
	{
		j=a[y][0]+1-i;
		a[x][i]=a[y][i]+a[y][j]+last;
		last=a[x][i]/n;
		a[x][i]%=n;
	}
	if(last>0)
		a[x][++a[x][0]]=last;
}
 
int main()
{
  readdata();
  for(int i=1;i<=30;i++)
    {
      add(i%2);                     //i为基数，add(1);huiwen(1);
      if(huiwen(i%2))		    //i为偶数，add(0);huiwen(0);
	  {
		  printf("STEP=%d\n",i);
		  return 0;
	  }
    }
  printf("Impossible!\n"); 
  return 0;
}
