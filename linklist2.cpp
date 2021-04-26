// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>

using namespace std;
vector<int> b[500100],ans;
int a[500100];
int main()
{
    int m=0,num,n,i,idx,now,j;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num);
        idx=upper_bound(a,a+m,num)-a;
        if(idx>=1&& num==a[idx-1]) continue;
        if(idx==m)
        {
            m++;
        }
        a[idx]=num;
        b[idx].push_back(num);



    }
    printf("%d\n",n-m);
    now=b[m-1][0];
    ans.push_back(now);
    for(i=m-2; i>=0; i--){
   // printf("m=%d\n",m);

        for(j=0; j<b[i].size(); j++)
        {
            if(b[i][j]<now)
            {
                now=b[i][j];
                ans.push_back(now);
                break;
            }
        }

    }

    return 0;
}



/*
8
-7 10 9 2 3 8 8 1
*/

