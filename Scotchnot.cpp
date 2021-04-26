#include<bits/stdc++.h>
using namespace std;
int t[5],n,a,b,mp[5][5]={{0,1},{2,3}};
void pre(int type,int colorA,int colorB,int cntA,int cntB){
    for(int i=1;i<=n;i++){
        t[type]+=(colorA|colorB);
        cntA++;
        cntB++;
        if(cntA==a){
            colorA=(colorA+1)%2;
            cntA=0;
        }
        if(cntB==b){
            colorB=(colorB+1)%2;
            cntB=0;
        }
    }
}
long long getres(int colorA,int colorB,int cntA,int cntB){
    long long res=0;
    for(int i=1;i<=n;i++){
        res+=t[mp[colorA][colorB]];
        cntA++;
        cntB++;
        if(cntA==a){
            colorA=(colorA+1)%2;
            cntA=0;
        }
        if(cntB==b){
            colorB=(colorB+1)%2;
            cntB=0;
        }
    }
    return res;
}
int main()
{
    //int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    pre(0,0,0,0,0);
    pre(1,0,1,0,0);
    pre(2,1,0,0,0);
    pre(3,1,1,0,0);
    printf("%lld\n",getres(1,1,0,0));
    return 0;
}

