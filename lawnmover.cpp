// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
int x[110][110];
int mi[110],mj[110];
int main(){
int r,c,t,k,j,i,l,loop,ch;
scanf("%d",&t);
for(loop=1;loop<=t;loop++){
    scanf("%d %d",&r,&c);
    ch=1;
    memset(mi,0,sizeof mi);
    memset(mj,0,sizeof mj);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf("%d",&x[i][j]);
            mi[i]=max(mi[i],x[i][j]);
            mj[j]=max(mj[j],x[i][j]);
        }
    }
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            if(x[i][j] <mi[i] && x[i][j] <mj[j])
              ch=0;
        }
    }
    printf("Case #%d: ",loop);
    if(ch) printf("YES\n");
    else printf("NO\n");
}

return 0;
}




