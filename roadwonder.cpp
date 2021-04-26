// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
#define INF 2000000000
using namespace std;
struct A
{
    int u,v,w;
};
A a[2000];
int dist[2000],temp[2000];
int main()
{

    int n,m,k,t,i,j,cou=0,s;
    scanf("%d %d %d %d",&n,&m,&k,&t);
    for(i=0; i<m; i++)
        scanf("%d %d %d",&a[cou].u,&a[cou].v,&a[cou].w),cou++;
    for(i=0; i<k; i++)
        scanf("%d %d %d",&a[cou].u,&a[cou].v,&a[cou].w),a[cou].w*=-1,cou++;
    while(t--)
    {
        scanf("%d",&s);
        for(i=1; i<=n; i++)
            dist[i]=INF;
        dist[s]=0;

        for(i=1; i<=n; i++)
            for(j=0; j<m+k; j++)

                if(dist[a[j].u]!=INF &&dist[a[j].u]+a[j].w < dist[a[j].v])
                    dist[a[j].v]=dist[a[j].u] +a[j].w;
        for(i=1;i<=n;i++)
            temp[i]=dist[i];
        for(j=0;j<m+k;j++)
            if(dist[a[j].u]!=INF && dist[a[j].u]+a[j].w<dist[a[j].v])
            dist[a[j].v]=dist[a[j].u]+a[j].w;
        for(i=1;i<=n;i++){
            if(dist[i]!=temp[i]||dist[i]==INF)
            printf("-1 ");
        else printf("%d ",dist[i]);
        }
        printf("\n");
        }






    return 0;
}




