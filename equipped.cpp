// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
// knapsack + bitmask+dijk.
/*
1. array[2^k] to make bitmask.
2. bring bitmask or(^) each other and sum each value of thing that you bitmask
3.knapsack to choose min (in the knapsack dynamic use dijktra too.).
*/
#define INF 2000000000
int dp[300];
int main(){
    int n,k,i,j,p=1,cost,bit;
    scanf("%d %d",&n,&k);
    for(i=0;i<k;i++)
        // to searh 2^k.
        p*=2;
    for(i=1;i<p;i++)
        dp[i]=INF;
    while(n--){
        scanf("%d",&cost);
        // invert normal num to 1 or 0 (number base 2 //haha i dont know it in eng)
        bit=0;
        for(i=0;i<k;i++){
            scanf("%d",&j);
            bit*=2;
            bit+=j;
        }
        for(i=0;i<p;i++){
            if(dp[i]!=INF &&dp[i]+cost < dp[i|bit]){
                dp[i|bit] =dp[i]+cost;
            }
        }
    }





printf("%d\n",dp[p-1]);


return 0;
}




