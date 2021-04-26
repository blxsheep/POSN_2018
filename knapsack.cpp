// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
int dp[110][11000];
int main(){
int n,m,i,j,p,w;
scanf("%d %d",&n,&m);
for(i=1;i<=n;i++){
    scanf("%d %d",&p,&w);
    for(j=0;j<w;j++){
        dp[i][j]=dp[i-1][j];

    }
    for(j=w;j<=m;j++){
        dp[i][j]=max(dp[i-1][j],dp[i-1][j-w]+p);

    }


}
printf("%d",dp[n][m]);





return 0;
}




