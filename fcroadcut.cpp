
#include<bits/stdc++.h>
using namespace std;
int r,c,ma=-200000,a[1010][1010],b[1010][1010],i,j,mi=9999999,cc[1010][1010],ans=0,sum=0,vr[100000],vc[100000],vbr[10000],vbc[100000],d[10000][10000];
int main(){
int dif,x,y;
scanf("%d %d",&r,&c);
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            scanf("%d",&a[i][j]);
            cc[i][j]=a[i][j];
            sum+=a[i][j];
        }
    }
     for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            scanf("%d",&b[i][j]);
            d[i][j]=b[i][j];

        }
    }
      // row
    a[0][0]=0;
    cc[0][0]=0;
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            b[i][j]+=b[i][j-1];
            vbr[i]=b[i][c];
                a[i][j]+=a[i][j-1];
                vr[i]=a[i][c];

        }
    }
    //backtracking
     for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            b[i][j]=d[i][j];

            a[i][j]=cc[i][j];
        }
        //printf("\n");
    }


    //column
   for(j=1; j<=c; j++)
    {
        for(i=1; i<=r; i++)
        {
                b[i][j]+=b[i-1][j];
                vbc[j]=b[r][j];
                a[i][j]+=a[i-1][j];
                vc[j]=a[r][j];
        }
    }
    for(i=1;i<=r;i++){
        dif=vbr[i-1]+vbr[i+1]-vr[i];
//printf("i= %d dif = %d + %d - %d\n",i,vbr[i-1],vbr[i+1],vr[i]);
        ma=max(ma,dif);
        //printf("max=%d dif1 =%d\n",ma,dif);
    }
    for(j=1;j<=c;j++){
        dif=vbc[j-1]+vbc[j+1]-vc[j];
        ma=max(ma,dif);
        //printf("j=%d dif = %d + %d - %d\n",j,vbc[j-1],vbc[j+1],vc[j]);
        //printf("max=%d dif2 =%d\n",ma,dif);
    }

    ans=sum+ma;
    //printf("sum=%d ma=%d\n",sum,ma);
    printf("%d",ans);



return 0;
}
/*
5 4
2 3 2 1
4 5 4 8
2 5 3 2
1 4 0 2
2 1 8 1
1 2 3 2
2 2 2 1
2 1 1 2
1 2 1 0
1 1 1 0
*/




