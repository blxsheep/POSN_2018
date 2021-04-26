// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
long long a[100100],w[100100],c[100100],mark[100100];
long long run,box,i,ch;
int main(){
long long q,n,k,mx=-1,r,l,sum=0,mid,summ;
scanf("%lld",&q);
while(q--){
    scanf("%lld %lld",&n,&k);
    memset(mark,0,sizeof mark);
    for(i=0,sum=0,mx=-1,ch=0;i<n;i++){
        scanf("%lld %lld",&w[i],&c[i]);
        mx=max(mx,w[i]);
        sum+=w[i];
        mark[c[i]]++;
        if(mark[c[i]]>k)
            ch=1;

    }
    if(ch){
        printf("-1\n");
        continue;
    }
    memset(mark,0,sizeof mark);
    l=mx,r=sum+1,run=0;
    while(l<r){
        mid=(l+r)/2;
        run++;
        for(i=0,summ=0,box=1;i<n;i++){
            if(summ+w[i]>mid || mark[c[i]]==run){
            box++;
            summ=w[i];
            run++;
            mark[c[i]]=run;
            }
            else{
                summ+=w[i];
                mark[c[i]]=run;

            }
        }
        if(box<=k) r = mid ;
        else  l = mid+1;
    }
    if(r>sum) printf("-1\n");
    else printf("%lld\n",r);
}





return 0;
}
/*
2
5 3
10 1
10 2
40 1
30 3
30 4
5 2
10 1
10 2
40 1
30 3
30 1
*/




