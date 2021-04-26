// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
struct Realhat
{
    int w,v,d,x,ty;
    bool operator <(const realhat &o) const
    {
        if(w<o.w) return false;
        else return true;
    }
};

struct Addhat
{
    int w,v,d,x,ty;
    bool operator < (const addhat &o) const
    {
        if(d<o.d) return false;
        else return true;
    }
};
priority_queue<Realhat> realhat;
priority_queue<Addhat> addhat;
Realhat temp;
Addhat addtemp;
int main()
{
    int time=0,opr,n,m,type,q;
    scanf("%d %d",&n,&m);
    q=n+m;
    while(q--){
        scanf("%d",&opr)
        if(opr==1){
                scanf("%d",&type);



        }
        if(opr==2){

        }
    }









    return 0;
}




