/*
4 5
0 1
1 2
2 0
2 3
1 3
*/
#include<bits/stdc++.h>
using namespace std;
stack< int > st;
vector<int> adj[5001],adj2[5001];
int in[5001],cmppp[5001],cmpLvl[5001],lowlink[5001],ind[5001],ti=0,CMPID=0,cnt[5001];
void dfs(int node){
    in[node]=1;
    st.push(node);
    lowlink[node]=ind[node]=++ti;
    for(int i = 0 ;i<adj[node].size();i++){
        int next=adj[node][i];
        if(ind[next]==0){
            dfs(next);
            lowlink[node]=min(lowlink[node],lowlink[next]);
        } else if(in[next]){
            lowlink[node]=min(lowlink[node],lowlink[next]);
        }
    }
    if(lowlink[node]==ind[node]){
        int w;
        CMPID++;
        while(st.top()!=node){
            w=st.top();
            in[w]=0;
            cmppp[w]=CMPID;
            st.pop();
        }
        w=st.top();
        st.pop();
        in[w]=0;
        cmppp[w]=CMPID;
    }
}
void dfs2(int cmppp,int lvl){
    for(int i=0;i<adj2[cmppp].size();i++){
        int next=adj2[cmppp][i];
        if(lvl+1<=cmpLvl[next])
            continue;
        else{
            cmpLvl[next]=lvl+1;
            dfs2(next,lvl+1);
        }
    }
}
int main()
{
    int n,v;
    scanf("%d %d",&n,&v);
    for(int i = 0 ;i<v;i++){
        int p,q;
        scanf("%d %d",&p,&q);
        adj[p].push_back(q);
    }
    for(int i=0;i<n;i++){
        if(ind[i]==0)
            dfs(i);
    }
    for(int i=0;i<n;i++){
        if(adj[i].size()>0)
        for(int j=0;j<adj[i].size();j++){
            if(cmppp[i]!=cmppp[adj[i][j]]){
                adj2[cmppp[i]].push_back(cmppp[adj[i][j]]);
            }
        }
    }
    for(int i=0;i<n;i++){
        if(cmpLvl[cmppp[i]]==0){
            cmpLvl[cmppp[i]]=1;
            dfs2(cmppp[i],1);
        }
    }
    for(int i=0;i<n;i++)
        cnt[cmpLvl[cmppp[i]]]++;
    for(int i=1;i<=n;i++)
        if(cnt[i]>0)
            printf("%d ",cnt[i]);
        else
            break;
    printf("\n%d",cmpLvl[cmppp[0]]);
    return 0;
}

