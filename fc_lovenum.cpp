// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
// use bitmask .
long long a[1030];
int main(){

long long n,i,bit,ans,j,num;
scanf("%lld",&n);
while(n--){
    scanf("%lld",&num);
    bit=0;
    while(num){
        bit|=1<<(num%10);
        num/=10;
        // now we get the digit in number.
    }
    a[bit]++;

}

for(i=0;i<1024;i++){
    for(j=i+1;j<1024;j++){
            /*
            check it have the same digit in each or not.
            amount of couples = a[i] x a[j]
            */
        if(i&j) ans+=a[i]*a[j];

    }
}
// check in the same number.
for(i=0;i<1024;i++)
    ans+=(a[i]*(a[i]-1)/2);
printf("%lld\n",ans);






return 0;
}




