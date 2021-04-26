// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
vector<int> g[300100];
int dp[300100];
int main()
{
    int n,i,r,s,ma=-1,j;

    scanf("%d",&n);
    for(i=0; i<n-1; i++)
    {
        scanf("%d %d",&r,&s);
        if(r>s) g[r].push_back(s);
        else g[s].push_back(r);

    }
    for(i=1; i<=n; i++)
    {
        for(j=0; j<(int)g[i].size(); j++)
        {
            if(dp[g[i][j]]>dp[i])
                dp[i]=dp[g[i][j]];
            }
              dp[i]++;
        if(dp[i]>ma)
            ma=dp[i];
    }

    printf("%d\n",ma);






    return 0;
}
/*
9
1 2
2 9
1 7
6 8
2 6
3 9
4 9
5 4

*/




