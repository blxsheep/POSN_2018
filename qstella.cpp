
// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;

struct A{
long long mp,st,hl,type;

bool operator < (const A& o)const{
if(mp!=o.mp) return mp < o.mp;
return st>o.st;
}

};
priority_queue<A> hea;
A temp;
int main(){
    long long r,n,t,i,j,ans=0,h,k,ans2=0,cnt=0;
    char opr,opr2;
    scanf("%lld",&k);
    for(i=1;i<=k;i++){
        scanf( " %c",&opr);
        temp.st=i;
        if(opr=='c'){
            scanf(" %c",&opr2);
            if(opr2=='n'){
                scanf("%lld",&temp.mp);
                temp.type=1;
                hea.push(temp);
            }
            else if (opr2=='r'){
                scanf("%lld %lld",&temp.mp,&temp.hl);
                temp.type=2;
                hea.push(temp);
            }
        }
        else if (opr=='u'){
            while(1){
                if(hea.empty()) break;
                temp=hea.top();
                hea.pop();
                if(temp.type==1){
                    ans+= temp.mp;
                    break;
                }
                else if (temp.type== 2){
                     cnt = (i-temp.st)/temp.hl;
                    if(cnt==0){
                        ans+=temp.mp;
                        break;
                    }
                    for(j=0;j<cnt;j++)
                        temp.mp/=2;

                    if(temp.mp>0){
                        temp.st+=cnt*temp.hl;
                        hea.push(temp);
                    }

                }
            }
        }
    }

while(!hea.empty()){
    temp=hea.top();
    hea.pop();
    if(temp.type==1){
        ans2++;
    }
    else{
          //  printf("o");
        cnt = (k-temp.st)/temp.hl;
        for(j=0;j<cnt;j++)
            temp.mp/=2;
        if(temp.mp!=0)
            ans2++;
    }

}
printf("%lld\n%lld",ans,ans2);








return 0;
}


/*
5
c n 100
c r 58 2
u
u
c r 1 1
*/


