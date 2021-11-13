#include <stdio.h>
#include <string.h>
int main()
{
	char a[1000],s[1000];
	int len,i,next,mid,top=0;//top=0 初始化栈 
	
	gets(a);//读入一行字符串 
	len=strlen(a);//求字符串的长度 
	mid=len/2-1;//求字符串的中点 
	
	//将mid前的字符依次入栈
	for(i=0;i<=mid;i++)
		s[++top]=a[i];
		
	//判断字符串的长度是奇数还是偶数，并找出需要进行字符匹配的起始下标 
	if(len%2==0) next=mid+1;
	else next=mid+2;
	
	//开始匹配 
	for(i=next;i<=len-1;i++)
	{
		if(a[i]!=s[top])
			break;
		top--;
	}
	
	//如果top的值为0，则说明栈内的所有字符都被一一匹配了 
	if(top==0) printf("YES");
	else printf("NO");
	return 0;
}
