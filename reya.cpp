// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long q,m,n,ans=0,sum=0,i;
    char a[110];
    scanf("%d",&q);
    while(q--){
        scanf(" %s %lld",a,&m);
        if(strlen(a)>6) n=m-1;
        else sscanf(a,"%lld",&n);
        if(m==1) printf("0\n");
        else if (n==0 || n==1) printf("1\n");
        else{
            ans=2;sum=1;
            for(i=2;i<=n;i++){
                sum*=i;
                ans+=sum;
                sum%=m,ans%=m;
            }
            printf("%lld\n",ans%m);
        }
    }







return 0;
}




