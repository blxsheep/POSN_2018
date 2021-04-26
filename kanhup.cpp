
#include<bits/stdc++.h>
using namespace std;


//heap
priority_queue<int> heap;
vector < int> g[100100];
int c[100100];
int ans[100100];
int main()
{
    //recieve
    int q,n,m,i,j,r,s,now;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d",&n,&m);
        for(i=0; i<m; i++)
        {
            scanf("%d %d",&r,&s);
            // recive graph
            g[r].push_back(s);
            c[s]++;

        }
        for(i=1; i<=n; i++)
        {
            if(c[i]==0)
                // make min heap
                heap.push(-i);
        }
            i=0;
            while(!heap.empty())
            {
                //make it back to plus
                now=heap.top()*-1;
                heap.pop();
                ans[i++]=now;
                for(j=0; j<g[now].size(); j++)
                {
                    c[g[now][j]]--;
                    if(c[g[now][j]]==0)
                        heap.push(-g[now][j]);
                }

            }
            if(i==n){
                printf("Yes ");
            for(j=0; j<n; j++)
                printf("%d ",ans[j]);
            printf("\n");

        }
        else
            printf("No\n");
        memset(c,0,sizeof c);
        memset(ans,0,sizeof ans);
        for(i=1;i<=n;i++)
            g[i].clear();




    }
    return 0;
}




