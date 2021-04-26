// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
int dp[2010][2010],path[2010][2010];
char a[2010],b[2010],c[2010];
int main()
{
    int i,j,lenb,lena,k=0;
    scanf(" %s %s",a+1,b+1);
    lena=strlen(a+1);
    lenb=strlen(b+1);
  //  printf("lena=%d lenb=%d\n",lena,lenb);
    for(i=1; i<=lena; i++)
    {
        for(j=1; j<=lenb; j++)
        {
            if(a[i]==b[j])
                dp[i][j]=dp[i-1][j-1]+1,path[i][j]=1;
            else if(dp[i-1][j]>=dp[i][j-1])
                dp[i][j]=dp[i-1][j],path[i][j]=2;
            else
                dp[i][j]=dp[i][j-1],path[i][j]=3;
        }


    }
    printf("%d\n",dp[lena][lenb]);
    //system("pause");
    if(!dp[lena][lenb]){
        printf("No Roma word\n");
        return 0;
    }

    i=lena,j=lenb;
    while(i>0&&j>0)
    {
        if(path[i][j]==1)
            c[k++]=a[i],i--,j--;
        else if(path[i][j]==2)
            i--;
        else j--;

    }
    for(i=k-1; i>=0; i--)
        printf("%c",c[i]);
    printf("\n");









    return 0;
}



/*
abcbdab
bdcaba
*/
