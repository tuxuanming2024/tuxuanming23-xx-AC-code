#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
	char a[31][1001],s;
	double x,m=0,n=0,v=0,l;
	cin>>x>>s;
	for(int i=1; i<=x+1; i++) {
		gets(a[i]);
		l=strlen(a[i]);
		if(a[i][0]=='c' && a[i][1]=='o' && a[i][2]=='n') m=m+1;
		for(int j=0; j<=l-1; j++) {
			if(a[i][j]==s) n=n+1;
		}
		v=v+l;
	}
	cout<<m<<endl;
	cout<<fixed<<setprecision(2)<<n/v*100<<"%";
}