// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
int n,m,k,c,a,b,visited[100010],nowcomp;
vector <int> G[100100];
vector<int>GT[100100];
//GT = Transpote Graph.
stack<int> S;
int compnum[100100];
int comp;

void dfs (int now)
{
    if(visited[now]) return;
    visited[now]=true;
    for(int i=0; i<G[now].size(); i++)
    {
        if(!visited[G[now][i]]) dfs(G[now][i]);

    }
    S.push(now);

}
void dfs2(int now)
{
    if(visited[now]) return ;
    visited[now]=true;
    compnum[now]=nowcomp;
    for(int i =0; i<GT[now].size(); i++)
    {
        if(!visited[GT[now][i]])
                dfs2(GT[now][i]);
    }


}
int main()
{

    scanf("%d %d %d",&n,&m,&k);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&c);
        for(int j=0; j<c; j++)
        {
            scanf("%d",&a);
            G[i].push_back(a);
            GT[a].push_back(i);
        }
    }
    for(int i=1; i<=n; i++) dfs(i);
    for(int i=1; i<=n; i++) visited[i]=false;

    nowcomp=1;
    while(!S.empty())
    {
        if(!visited[S.top()])
        {
            dfs2(S.top());
            nowcomp++;
        }
        S.pop();
    }
    while(k--)
    {
        scanf("%d %d",&a,&b);
        printf("%s\n",(compnum[a]==compnum[b])?"yes":"no");
    }






    return 0;
}




