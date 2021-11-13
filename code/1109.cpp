#include <iostream>
#include <malloc.h>
using namespace std;
struct student
{
	int f, bf, lw, s;	
	char name[100], gb, xb;
};
int main()
{
	struct student * p;
	int n, i, j, maxn = 0, z = 0;
	cin>>n;
	p = (struct student *)malloc(sizeof(struct student) * n);
	for(i = 0; i < n; i++)
	{
		cin>>p[i].name>>p[i].f>>p[i].bf>>p[i].gb>>p[i].xb>>p[i].lw;
		p[i].s = 0;
		if(p[i].f > 80 && p[i].lw >= 1) p[i].s += 8000;
		if(p[i].f > 85 && p[i].bf > 80) p[i].s += 4000;
		if(p[i].f > 90) p[i].s+=2000;
		if(p[i].f > 85 && p[i].xb == 'Y') p[i].s += 1000;
		if(p[i].bf > 80 && p[i].gb == 'Y') p[i].s += 850;
	}	
	for(i = 0; i < n; i++)
	{
		z += p[i].s;
		if(p[i].s > p[maxn].s)
			maxn = i;
	}
	cout<<p[maxn].name<<endl<<p[maxn].s<<endl<<z;
	return 0;
}
