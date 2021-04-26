

#include<bits/stdc++.h>

using namespace std;
int cnt;
int l[100100],h[100100],id[1000000];
int a,b,c,i,j,ch;
int main(){


scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
ch=c;
//printf(" a= %d\n",a);
for(i=1;i<=a;i++){
        //recive id comment
    scanf("%d %d",&l[i],&h[i]);
//printf("id = %d test like = %d hate = %d",i,l[i],h[i]);
}
for(j=1;j<=a;j++){
for(i=1;i<=a;i++){
    // chex to change ch
   // printf("ch= %d hi =%d i= %d\n",ch,h[i],i);
    if(h[i]== ch){

        ch=l[i];
       // printf("xxxch= %d hi =%d i= %d\n",ch,h[i],i);
        cnt++;

//        printf(" for tets ch =%d",ch);
//        printf("\n for test %d",cnt);
//        if(i==a) {
//                continue;
//
//
//    }
    }

}

//    else
//    {printf("It is here\n");
//        break;
//
//    }

}if(cnt>9000) printf("-1");
else
printf("%d",cnt);








}

/*
4 5 3
1 2
3 2
2 3
4 1
*/


