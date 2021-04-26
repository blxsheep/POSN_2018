// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>

using namespace std;
typedef pair<int , int> PII;
priority_queue<PII> heap;
int a[500010],dp[500010];
PII temp;
int main(){
    int i,j,n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=1;i<=n;i++){
    scanf("%d",&dp[i]);
    while(!heap.empty()){
        temp = heap.top();
        if(temp.second<i-k){
            heap.pop();
            continue ;

        }
        dp[i]+=temp.first*-1;
        break;
    }
    heap.push(make_pair(dp[i]*-1,i));

    }

printf("%d\n",dp[n]);





return 0;
}

/*
7
3
1 4 2 6 2 4 2
*/


