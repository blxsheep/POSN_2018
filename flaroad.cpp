
#include<bits/stdc++.h>
using namespace std;
int r,c,ma=0,a[1010][1010],b[1010][1010],i,j,mi=9999999,cc[1010][1010],ans=0,sum=0;
int main()
{

    scanf("%d %d",&r,&c);
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
     for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            scanf("%d",&b[i][j]);

        }
    }
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            cc[i][j]= a[i][j]+b[i][j];
            sum+=cc[i][j];
        }
    }
    // column
    cc[0][0]=0;
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {

                cc[i][j]+=cc[i-1][j-1];
                mi=min(mi,cc[i][j]);
        }
    }
//row
   for(j-1; j<=c; j++)
    {
        for(i=1; i<=r; i++)
        {

                cc[i][j]+=cc[i-1][j-1];
                mi=min(mi,cc[i][j]);
        }
    }


    ans = sum-mi;
    printf("%d",ans);





    return 0;
}

/*
5 4
2 3 2 1
4 5 8 4
2 5 3 2
1 4 0 2
2 1 8 1
1 2 3 2
2 2 2 1
2 1 1 2
1 2 1 0
1 1 1 0
*/



