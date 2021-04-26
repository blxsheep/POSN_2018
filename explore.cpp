// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
vector<int> g[500050];
int hin[500500],dp[500500];
int main(){
    int m,n,k,a,b,where,i,j;
    scanf("%d %d %d",&n,&m,&k);
    while(m--){
        scanf("%d %d",&a,&b);
        g[a].push_back(b);

    }
    while(k--){
        scanf("%d",&where);
        hin[where]=1;
    }
    dp[1]=1;
    for(i=0;i<=n;i++){
        if(dp[i]==0) continue;
        if(hin[i]==0) dp[i+1]=1;
        for(j=0;j<g[i].size();j++)
            dp[g[i][j]]=1;
    }
    printf("%d",dp[n]);
    if(dp[n]==0){
        for(i=n-1;i>=1;i--)
            if(dp[i]==1) break;
        printf(" %d",i);

    }








return 0;
}




