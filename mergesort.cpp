// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
int l,r,mid,i;
int a[1000];

int ms (a[i],l,r){

if(l>=r) return;
mid = (l+r)/2;
ms(a[i],l,mid);
ms(a[i],mid+1;r);
merd(a[i],l,mid,r);


}

int merd (a[i],l,r,mid){
int t[i];
i=left;
j=mid+1;
int k;
for(k=l;k<=rk++)
{
    if(i>mid)
    {
        t[k]=a[j++];
        continue;
    }
    if(j>right)
    {
        t[k]=a[i++]
        continue;
    }
    if(a[i]<a[j])
        t[k]=a[i++];
    elset[k]=a[j++];
    for(k=l;k<=r;k++)
        a[k]=t[k];
}



}
int main(){

return 0;
}




