// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
int dp[300][300],x[5050],y[5050],d[5050];
int main()
{
    int q,n,m,i,j,k,ch,a,b,c,s,e,p;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d",&n,&m);
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                if(i==j) dp[i][j]=0;
                else dp[i][j]=1<<20;
        while(m--)
        {
            scanf("%d %d %d",&a,&b,&c);
            dp[a][b]=dp[b][a]=c;


        }
        for(k=1; k<=n; k++)
            for(i=1; i<=n; i++)
                for(j=1; j<=n; j++)
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);





        scanf("%d",&p);
        for(i=0; i<p; i++)
            scanf("%d %d %d",&x[i],&y[i],&d[i]);
        for(i=1; i<=n-1; i++){
            for(j=i+1; j<=n; j++){
                    ch=1;
                for(k=0; k<p; k++)
                {
                     s=x[k],e=y[k];
                     if(min(dp[s][e],min(dp[s][i]+dp[j][e],dp[s][j]+dp[i][e]))!=d[k])
                     {
                         ch=0; break;
                     }
                }
                if(ch)
                {

                    printf("%d %d\n",i,j);
                    goto jump;
                    break;
                }
            }
        }
        jump: ;
    }






    return 0;
}




