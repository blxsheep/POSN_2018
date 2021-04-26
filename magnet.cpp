// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
int a[200100],b[200100];
int main(){

int n,m,q,i=0,r,s,k,j=0;
scanf("%d %d %d",&n,&m,&q);
while(m--){
    scanf("%d %d",&r,&s);
    a[i++]=r,a[i++]=r+s;
}
sort(a,a+i);
m=i;
for(i=0;i<m;){
    for(k=i;k<m &&a[i]==a[k];k++);
    if((k-i)%2==1){
        b[j++]=a[i];
    }
    i=k;
}
m=j;
while(q--){
    scanf("%d",&r);
    if(r<b[0]) printf("%d\n",b[0]-1);
    else if(r>=b[m-1]) printf("%d\n",n-b[m-1]+1);
    else{
        s=upper_bound(b,b+m,r)-b;
        printf("%d\n",b[s]-b[s-1]);
    }
}





return 0;
}




