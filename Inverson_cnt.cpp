// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
long long  a[100100],n,b[100100],k,ans;
void ms (long long l,long long r)
{
    if(l==r) return;
    long long  mid=(l+r)/2;
    ms(l,mid);
    ms(mid+1,r);
    long long i ,j;
    i=l,j=mid+1,k=l;
    while(i<=mid && j<=r){
        if(a[i]<=a[j]) {
            b[k++]=a[i++];

        }
        else {
            b[k++]=a[j++];
            ans+=mid-i+1;

        }
    }
    while(i<=mid)
        b[k++]=a[i++];
    while(j<=r)
        b[k++]=a[j++];
    for(i=l;i<=r;i++){
        a[i]=b[i];
    }
    return;




}

int  main(){

long long i,q;
scanf("%lld",&q);
while(q--){

scanf("%lld",&n);
for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    ans=0;
    ms(0,n-1);

if(ans%2==0) printf("yes\n");
else printf("no\n");

}



return 0;
}




