// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
int coins[5]={1,5,10,25,50},dp[100100];
int main(){
    int i,j,k,q;
dp[0]=1;
for(i=0;i<5;i++){
    for(j=coins[i];j<=100000;j++)
        dp[j]+=dp[j-coins[i]],dp[j]%=1000003;
}

scanf("%d",&q);
while(q--){
    scanf("%d",&k);
    printf("%d\n",dp[k]);
}






return 0;
}




