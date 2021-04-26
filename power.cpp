// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;

vector <int> a;
int gcd(int i,int j){
if(i%j==0) return j;
else return gcd(j,i%j);
}
int q,n,temp,i,j,ans;
int main(){

    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        if(n<=3){
            printf("NO\n");continue;

        }
        a.clear();

        for(i=2;i<10000;i++){
            if(n%i==0){
                for(j=0;n%i==0;j++,n/=i);
                a.push_back(j);

            }
        }
        ans=a[0];
        for(i=1;i<a.size();i++)
            ans=gcd(ans,a[i]);
        if(ans==1|| n!=1) printf("NO\n");
        else printf("%d\n",ans);
    }







return 0;
}




