// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
#define INF 1000000
int dp[1010][1010],a[1010],n;
int memo (int now,int last){
if(now<1|| now>n) return INF;
if(dp[now][last]!=-1) return dp[now][last];
if(now==n) return a[n];
return dp[now][last] =a[now]+min(memo(now-last,last),memo(now+last+1,last+1));
}
int main(){
int i;
scanf("%d",&n);
for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
memset(dp,-1,sizeof dp);
printf("%d\n",memo(2,1));






return 0;
}




