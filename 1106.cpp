#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a=0,b=0;
	char ch;
	for(cin>>ch; ch!='E'; cin>>ch) {
		if(ch=='W') a++;
		else if(ch=='L') b++;
		if((a>=11||b>=11)&&abs(a-b)>=2) {
			cout<<a<<":"<<b<<endl;
			a=0;
			b=0;
		}
	}
	cout<<a<<":"<<b;
}