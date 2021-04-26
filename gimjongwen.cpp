// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
double x[5050],y[5050],mx,my;
int main()
{
    int m,n,i;
    scanf("%d %d",&m,&n);
    for(i=0; i<n; i++)
        scanf("%lf %lf",&x[i],&y[i]);
    sort(x,x+n);
    sort(y,y+n);
    if(x[0]>m-x[n-1]) mx=x[0];
    else mx=m-x[n-1];

    for(i=1; i<n-1; i++)
        if((x[i+1]-x[i])/2.0> mx)
            mx=(x[i+1]-x[i])/2.0;
    if(y[0]>m-y[n-1]) my =y[0];
    else my=m-y[n-1];

    for(i=1;i<n;i++)
        if((y[i+1]-y[i])/2.0> my)
        my=(y[i+1]-y[i])/2.0;
    printf("%.3lf\n",min(mx,my));







    return 0;
}




