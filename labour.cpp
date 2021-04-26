// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
long long a[10000100];
int main(){
long long n,m,i,l,r,mid,sum;
scanf("%lld %lld",&m,&n);
for(i=0;i<m;i++)

    scanf("%lld",&a[i]);
l=0,r=200000000000000;
while(l<r){
    mid =(l+r)/2;
    for(i=0,sum=0;i<m;i++)
        sum+=mid/a[i];
    if(sum>=n) r = mid;
    else l = mid+1;
}
printf("%lld\n",l);






return 0;
}




