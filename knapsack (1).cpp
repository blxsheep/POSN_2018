
#include<bits/stdc++.h>
using namespace std;
int dp[105][10100] ;
int main(){
// j= weight that can affort.

int  n ,p,m,i,j,w;
scanf("%d %d",&n,&m);
//j=m;
for(i=1;i<=n;i++){
        scanf("%d %d",&p,&w);
        for(j=0;j<w;j++)
            dp[i][j]=dp[i-1][j];
        for(j=w;j<=m;j++)
        dp[i][j]=max(dp[i-1][j],p+dp[i-1][j-w]);

}
            printf("%d\n",dp[n][m]);







return 0;
}




