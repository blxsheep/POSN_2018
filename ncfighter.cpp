// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
vector<PII> g[100100];
int mid,mark[100100],ch;


int dfs(int u,int color){

if(mark[u]==color) return 0;
if(mark[u]!=0 && mark[u]!=color) return 1;
mark[u]=color;
for(int i=0;i<g[u].size();i++){
        //if index that to go > mid it not important to create graph .
        // to reduce the big O.
    if(g[u][i].second>mid) continue;
    if(dfs(g[u][i].first,3-color)==1) return 1;
}
    return 0;
}


int a,b,i,s,r,l;
int main(){
    // Bipartite graph + Binary Search;

scanf("%d %d",&a,&b);
for(i=1;i<=b;i++){
    scanf("%d %d",&r,&s);
    //link each other and keep index too;
    g[r].push_back(make_pair(s,i));
    g[s].push_back(make_pair(r,i));
}
l=1,r=b;
while(l<r){
    mid=(l+r)/2;
    memset(mark,0,sizeof mark);
    for(i=1,ch=0;i<=a;i++){
        if(mark[i]==0){

            if(dfs(i,1)==1){
                ch=1;
        //it not bipatite here;
                break;
            }
        }
    }
    if(ch) r=mid;
    else l=mid+1;
}
printf("%d\n",l);
return 0;
}
/*
6 8
3 4
1 2
5 6
1 6
1 3
4 5
2 4
2 6
*/




