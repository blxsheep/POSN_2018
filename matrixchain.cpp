// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
int row[15],col[15],n,dp[15][15],mi,i,path[15][15];
int play(int l,int r)
{
    if(l==r) return 0;
    if(dp[l][r]) return dp[l][r];
    int mi=1<<30,k,now;
    for(k=l;k<r;k++)
    {
        now = play(l,k)+play(k+1,r)+row[l]*col[k]*col[r];
        if(now<mi) mi=now,path[l][r]=k;
    }
    return dp[l][r]=mi;
}
void prin(int l,int r)
{
    if(l==r){
            printf("A%d",l+1);
            return;
    }

    printf("(");
    prin(l,path[l][r]);
    printf(" x ");
    prin(path[l][r]+1,r);
    printf(")");

}
int main(){
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d %d",&row[i],&col[i]);
    printf("%d\n",play(0,n-1));
    prin(0,n-1);

return 0;
}




