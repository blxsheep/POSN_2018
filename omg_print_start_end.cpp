// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
char a[100100],b[100100],pi[100100];
int st[100100],en[100100];
int main(){
int lena,lenb,i,j,k,c,cnt=0,q;
scanf("%d",&q);
while(q--){
scanf(" %s %s",a+1,b+1);
lena=strlen(a+1);
lenb=strlen(b+1);
j=0;
for(i=2;i<=lenb;i++){
    while(j>0 && b[j+1]!=b[i]) j=pi[j];
    if(b[j+1]==b[i]) j++;
    pi[i]=j;
}
k=1,c=1;
for(i=1,j=0;i<=lena;i++){
    while(j>0 && b[j+1]!=a[i]) j=pi[j];
    if(b[j+1]==a[i]) j++;
    if(j==lenb) {
        cnt++;
        st[k++]=i-lenb+1;
        en[c++]=i;
    }
}
if(cnt!=0){
    printf("yes\n");
    printf("cnt =%d\n",cnt);
    for(i=1;i<k;i++)
        printf("start at %d\n",st[i]);
    for(i=1;i<c;i++)
        printf("end at %d\n",en[i]);
}
else printf("no\n");
c=1,k=1,cnt=0;
memset(st,0,sizeof st);
memset(en,0,sizeof en);
memset(pi,0,sizeof pi);
memset(a,0,sizeof a);
memset(b,0,sizeof b);
}
return 0;
}




