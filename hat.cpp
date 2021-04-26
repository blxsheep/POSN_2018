// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
struct A
{
    int w,v,d,x,ty;
    bool operator < (const A&o) const
    {

        if (w < o.w) return false;
        else return true;

    }
};
A temp;
priority_queue<A> heap;
int main()
{
    int n,m,q,time=0,type,opr;
    scanf("%d %d",&n,&m);
    q=n+m;
    while(q--)
    {
        time++;

        scanf("%d",&opr);
        if(opr==1)
        {
            scanf("%d",&type);
            if(type==1)
            {
                scanf("%d %d",&temp.w,&temp.v);
                heap.push(temp);

            }
            if(type==2)
            {
                scanf("%d %d %d",&temp.w,&temp.v,&temp.d);
                heap.push(temp);
            }
            if(type==3)
            {
                scanf("%d %d %d %d",&temp.w,&temp.v,&temp.d,&temp.x);
                heap.push(temp);
            }

        }
        //checking

        temp=heap.top();
        if(temp.ty==2){
            if(time>=temp.d) {
                    printf("Its here");
                    heap.pop();
            }
        }
        if(temp.ty==3){
            if(time>=temp.d) temp.w=temp.x;
        }

        // print value

        else if(opr==2){
            if(heap.empty()) printf("0\n");
            else {
                    printf("time= %d wieght=%d\n",time,temp.w);
                printf("%d\n",temp.v);
                heap.pop();
            }
        }

    }









    return 0;
}




