// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
long long dp[1001000],a[1001000];
int main()
{
    int i,q,r,s,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld",&a[i]);
        dp[i]=dp[i-1];
        if(a[i]>a[i-1]) dp[i]+=a[i]-a[i-1];
    }
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d",&r,&s);
        printf("%lld\n",dp[s]-dp[r]);
    }








    return 0;
}




