// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
int h[300100],t[300300],r[300300];
int findh(int x){
if(x==h[x]) return x;
return h[x]=findh(h[x]);
}

int findt(int x){
if(x==t[x]) return x;
return t[x]=findt(t[x]);
}
int main(){

int i,n,a,b,j;
scanf("%d",&n);
for(i=1;i<=n;i++){
    t[i]=h[i]=i,r[i]=0;
}


for(i=1;i<n;i++)
{

    scanf("%d %d",&a,&b);
    if(r[b]==0){
        r[b]=a;
        t[b]=t[a]=findt(a);
        h[a]=h[b]=findh(b);
    }
    else{
        t[a]=findt(a),h[a]=findh(a);
        t[b]=findt(b),h[b]=findh(b);
        r[t[a]]=r[b];
        r[b]=a;
        h[a]=h[b],t[a]=t[b];


    }


}
i = findh(1);
for(j=0;j<n-1;j++){
    printf("%d ",i);
    i=r[i];
}
printf("%d\n",i);
return 0;
}




