// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
struct A {
int i,j,dis,gate;
bool operator < (const A&o) const {
    return dis> o.dis;
}
};
priority_queue< A> dijk;
A temp;
int mark[60][60][2],a[60][60],dr[4]={1,-1,0,0},dc[4]={0,0,1,-1};
int main(){
    int i,j,n,sti,stj,enj,eni,nowi,nowj,nowdis,nowgate,nexti,nextj,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
            mark[i][j][0]=mark[i][j][1]=1<<20;
        }
    }
    scanf("%d %d %d %d",&sti,&stj,&eni,&enj);
    temp.i=sti,temp.j=stj,temp.dis=0,temp.gate=0;
    mark[sti][stj][0]=1;
    dijk.push(temp);
    while(!dijk.empty()){
        temp=dijk.top();
        dijk.pop();
        nowi=temp.i,nowj=temp.j,nowdis=temp.dis,nowgate=temp.gate;
        if(nowi==eni && nowj==enj && nowgate==1){
            printf("%d\n",nowdis); return 0;
        }
        for(k=0;k<4;k++){
            nexti=nowi+dr[k];
            nextj=nowj+dc[k];
            if(nexti<1|| nextj<1 || nexti >n || nextj>n) continue;
            temp.gate=nowgate;
            if(a[nexti][nextj]<0)
                temp.gate^=1;
            if(mark[nexti][nextj][temp.gate]==1) continue;
            temp.i=nexti,temp.j=nextj,temp.dis=nowdis+abs(a[nexti][nextj]);
            dijk.push(temp);
            mark[nexti][nextj][temp.gate]=1;
        }
    }







return 0;
}




