// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
// divide and conquer.
long long MOP(int a,int b,int c)
{
    if(b==0) return 1;
    if(b==1) return a%c;
    long long p =MOP(a,b/2,c);
    if(b%2==0) return (p*p)%c;
    else return (p*p*a)%c;
}
int main(){
int q,a,c,b;
scanf("%d",&q);
while(q--)
    {
        scanf("%d %d %d",&a,&b,&c);
        printf("%lld\n",MOP(a,b,c));
    }






return 0;
}




