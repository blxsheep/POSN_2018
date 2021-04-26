// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
char a[1000100],b[1000100],pi[1000100];
int main(){
int lena,lenb,i,j;
scanf(" %s %s",a+1,b+1);
lena=strlen(a+1);
lenb=strlen(b+1);
j=0;
for(i=2;i<=lenb;i++){
    while(j>0 && b[j+1]!=b[i]) j=pi[j];
    if(b[j+1]==b[i]) j++;
    pi[i]=j;

}


for(i=1,j=0;i<=lena;i++){
    while(j>0 && b[j+1]!=a[i]) j=pi[j];
    if(b[j+1]==a[i]) j++;

    if(j==lenb){
        printf("Lucky\n");
        return 0;
    }

}
printf("Unlucky\n");



return 0;
}




