#include <iostream>
using namespace std;
int s[505][505],f[505][505],dp[505][505],m,n;
int main()
{
    cin>>m>>n;
    for(int i=1;i<m;i++) cin>>s[i][i+1];
    for(int i=1;i<=m;i++)
        for(int j=i+1;j<=m;j++)
            s[i][j]=s[j][i]=s[i][j-1]+s[j-1][j];
    for(int i=1;i<=m;i++)
        for(int j=i+1;j<=m;j++)
        {
            int mid=(i+j)/2;
            for(int k=i;k<=j;k++) f[i][j]+=s[k][mid];
        }
    for(int i=1;i<=m;i++) dp[i][1]=f[1][i];
    for(int i=1;i<=m;i++)
        for(int j=2;j<=n;j++)
        {
            dp[i][j]=0x7fffffff;
            for(int k=j-1;k<=i;k++) 
                dp[i][j]=min(dp[i][j],dp[k][j-1]+f[k+1][i]);
        }
    cout<<dp[m][n];
    return 0;
}
