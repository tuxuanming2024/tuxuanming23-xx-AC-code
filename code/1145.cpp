#include<bits/stdc++.h>
using namespace std;
int k,n;
int x_1,y_1,z_1,x_2,y_2,z_2;
int biao_ji1=1,biao_ji2=1;
int b1[1100][1100],b2[1100][1100];
int main()
{
    cin>>k;
    while(k)
    {
        cin>>n;
        cin>>x_1>>y_1>>z_1;//读入
        cin>>x_2>>y_2>>z_2;
        biao_ji1=biao_ji2=1;//默认能走
        memset(b1,0,sizeof(b1));
        memset(b2,0,sizeof(b2));
        while((x_1!=x_2||y_1!=y_2)&&(biao_ji1||biao_ji2))//循环先前走
        {
            b1[x_1][y_1]=1;//标记
            b2[x_2][y_2]=1;
            if(biao_ji1)//如果小林能走
            {
                if(z_1==3)//根据题意去试
                {
                    if(x_1-1>=0&&b1[x_1-1][y_1]==0) x_1--;
                    else
                    {
                        z_1=0;
                        if(y_1+1<n&&b1[x_1][y_1+1]==0) y_1++;
                        else biao_ji1=0;//表示无法再走
                    }
                }
                else if(z_1==0)
                {
                    if(y_1+1<n&&b1[x_1][y_1+1]==0) y_1++;
                    else
                    {
                        z_1=1;
                        if(x_1+1<n&&b1[x_1+1][y_1]==0) x_1++;
                        else biao_ji1=0;
                    }
                }
                else if(z_1==1)
                {
                    if(x_1+1<n&&b1[x_1+1][y_1]==0) x_1++;
                    else
                    {
                        z_1=2;
                        if(y_1-1>=0&&b1[x_1][y_1-1]==0)    y_1--;
                        else biao_ji1=0;
                    }
                }
                else
                {
                    if(y_1-1>=0&&b1[x_1][y_1-1]==0)    y_1--;
                    else
                    {
                        z_1=3;
                        if(x_1-1>=0&&b1[x_1-1][y_1]==0)    x_1--;
                        else biao_ji1=0;
                    }
                }
            }
            if(biao_ji2)//同上
            {
                if(z_2==3)
                {
                    if(x_2-1>=0&&b2[x_2-1][y_2]==0)    x_2--;
                    else
                    {
                        z_2=2;
                        if(y_2-1>=0&&b2[x_2][y_2-1]==0)    y_2--;
                        else biao_ji2=0;
                    }
                }
                else if(z_2==0)
                {
                    if(y_2+1<n&&b2[x_2][y_2+1]==0) y_2++;
                    else
                    {
                        z_2=3;
                        if(x_2-1>=0&&b2[x_2-1][y_2]==0)    x_2--;
                        else biao_ji2=0;
                    }
                }
                else if(z_2==1)
                {
                    if(x_2+1<n&&b2[x_2+1][y_2]==0)    x_2++;
                    else
                    {
                        z_2=0;
                        if(y_2+1<n&&b2[x_2][y_2+1]==0) y_2++;
                        else biao_ji2=0;
                    }
                }
                else
                {
                    if(y_2-1>=0&&b2[x_2][y_2-1]==0)    y_2--;
                    else
                    {
                        z_2=1;
                        if(x_2+1<n&&b2[x_2+1][y_2]==0) x_2++;
                        else biao_ji2=0;
                    }
                }
            }
        }
        if(x_1==x_2&&y_1==y_2)    cout<<x_1<<" "<<y_1;
        else cout<<-1;
        cout<<endl;
        k--;
    }
}