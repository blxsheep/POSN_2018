
#include<bits/stdc++.h>
using namespace std;

char c[1010][1010];
int cnt[1010][1010],ans=0,mi=999999;
int main()
{
    int i,j,n,m,k,l,x,y;
    scanf("%d %d",&n,&m);
    for(i=1; i<=n ; i++)
    {
        scanf(" %s",&c[i][1]);
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(c[i][j]=='X')
            {
ans=0;
                k=i-1,l=j-1;
                while(c[k][j]=='v')
                    ans++,k--;
                k=i+1;
                while(c[k][j]=='^')
                    ans++,k++;
                while(c[i][l]=='>')
                    ans++,l--;
                    l=j+1;
                while(c[i][l]=='<')
                    ans++,l++;
                   // printf("x=%d y=%d ans =%d \n",i,j,ans);
                    if(ans<mi){
                        x=i,y=j;

                    }
               mi = min(mi,ans);

                }

        }
    }

printf("%d %d",x,y);



    return 0;
}
/*
6 6
#v##v#
>X<>X<
#^####
######
>X<>X<
#^##^#
*/




