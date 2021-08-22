#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,k,c=0;
    cin>>m>>k;
    if((m%19)!=0)cout<<"NO";
    else{while(m>0){
		if(m%10==3)c++;
		m=(m-m%10)/10;
    }
	if(c==k)cout<<"YES";
    else cout<<"NO";
	}
    return 0;
}