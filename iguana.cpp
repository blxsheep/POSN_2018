// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;

typedef pair <int,int> PII;
vector <PII> c;
int main()
{
    int n,m,a,b,co,sum=0,amount,now,want,ans=0,i;
    char col;
    scanf("%d %d",&n,&m);
    for(i=0; i<m; i++)
    {
        scanf("%d %d",&a,&b);
        c.push_back(make_pair(a,1));
        c.push_back(make_pair(b+1,-1));


    }
    c.push_back(make_pair(1,0));
    c.push_back(make_pair(n+1,0));
    sort(c.begin(),c.end());
    scanf(" %c",&col);
    if(col=='R') want = 0;
    if(col=='G') want = 1;
    if(col == 'B') want = 2;
    for(i=0; i<c.size()-1; i++)
    {
        sum +=c[i].second;
        amount=c[i+1].first-c[i].first;
        now=sum%3;
        ans+=((want-now+3)%3)*amount;
    }
    printf("%d\n",ans);

    return 0;
}




