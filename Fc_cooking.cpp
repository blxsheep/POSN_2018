// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
// use bitmasks  to help in permutation to reduce Big O.
int a[12],b[12];

int main(){
int n,i,j,tmp,suma=1,sumb=0,mi=1<<20;
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d %d",&a[i],&b[i]);

tmp=1<<n;
for(i=1;i<tmp;i++){
        suma=1,sumb=0;
    for(j=0;j<n;j++){
        // to check and permute by bitmask.
        if(i&(1<<j)){
            suma*=a[j];
            sumb+=b[j];
        }
    }
    if(abs(suma-sumb) <mi) mi =abs(suma-sumb);
}
printf("%d\n",mi);






return 0;
}




