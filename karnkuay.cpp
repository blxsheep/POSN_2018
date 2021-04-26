// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
int dp[100100];
int main(){
int n,i,now;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%d",&now);
    if(i>=3)
        dp[i]=max(dp[i-1],now+dp[i-3]);
}
printf("%d\n",dp[n]);






return 0;
}




