#include <iostream> 
using namespace std; 
int f(int a, int b) 
{ 
    if (a==0) return 1; 
    if (b==1) return 1; 
    if (a<0) return 0; 
    return f(a-b,b)+f(a,b-1); 
} 
int main() 
{ 
    int n; 
    int a,b; 
    cin>>n; 
    while(n--) 
    { 
        cin>>a>>b; 
        cout<<f(a,b)<<endl; 
    } 
    return 0; 
} 