// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
int dp[100100];
#define INF 200000000
int main(){
    int q,z,m,i,j;
    for(i=0;i<=100000;i++)
        dp[i]=100;
    dp[0]=0;
    for(i=0;i<=100000;i++){
        for(j=0;j<=317;j++)
            if(i+j*j<=100000)
            dp[i+j*j]=min(dp[i+j*j],dp[i]+1);
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&z,&m);
        printf("%d\n",dp[z]%m);
    }








return 0;
}




