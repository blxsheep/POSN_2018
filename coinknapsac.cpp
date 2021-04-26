
#include<bits/stdc++.h>
using namespace std;
int dp[1001000],coin[12];
int main(){
int m,i,j,n;
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
    scanf("%d",&coin[i]);
for(i=1;i<=m;i++)
    dp[i]=200000000;
for(i=1;i<=m;i++){
    for(j=0;j<n;j++){
        if(i>=coin[j])
            dp[i]=min(dp[i],dp[i-coin[j]]+1);


    }
}
if(dp[m]==200000000)
    printf("0\n");
else printf("%d\n",dp[m]);



return 0;
}




