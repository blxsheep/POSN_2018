
#include<bits/stdc++.h>
using namespace std;
int main(){
char s[6000];
int q,a,len;
scanf("%d",&q);
while(q--){
        scanf("%s",s);
   len = strlen(s);
   if(s[len-1]%2==0) printf("EVEN\n");
   else printf("ODD\n");
}



return 0;
}




