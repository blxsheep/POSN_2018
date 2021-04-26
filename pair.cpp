// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
pair <long long,long long > arr[100100];
long long a[100100],qs[100100],b[100100];
long long ans;
void merg(long long l,long long r)
{
    if(l==r) return ;
    long long mid =(l+r)/2;

    merg(l,mid);
    merg(mid+1,r);
    qs[l-1]=0;
    for(long long i=l; i<=r; i++)
        qs[i]=qs[i-1]+a[i];
    long long i=l,j=mid+1,cou=l;
    while(  i<=mid && j<=r)
    {
        if(a[i]<a[j])
        {
            b[cou++] =a[i++];
        }
        else if (a[i]>a[j])
        {
            ans+=(mid-i+1)*a[j]+qs[mid]-qs[i-1];
            b[cou++]=a[j++];
        }
    }
    while(i<=mid)
    {
        b[cou++]=a[i++];
    }
    while(j<=r)
        b[cou++]=a[j++];
    for(i=l; i<=r; i++)
        a[i]=b[i];

}

int main()
{
    long long n,i;
    scanf("%lld",&n);

    for(i=1; i<=n; i++)
        scanf("%lld %lld",&arr[i].second,&arr[i].first);
    sort(arr+1,arr+n+1);
    for(i=1; i<=n; i++)
        a[i]=arr[i].second;
    for(i=1; i<=n; i++)
        a[i]=arr[i].second;
    merg(1,n);

    printf("%lld\n",ans);







    return 0;
}




