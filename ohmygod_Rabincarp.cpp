// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
#define MOD 1000003;
using namespace std;
char a[1100000],b[1100000];
int main(){
    int lena,lenb,ha=0,hb=0,i,j,Mb=1,temp;
    //number can be other else form 31 iTs Random number
    // that make it "quite"  optimal. so we have to check it(Only that hash a == hash b).
     scanf(" %s %s",a,b);
    lena=strlen(a);
    lenb=strlen(b);
    for(i=0;i<lenb;i++){
        ha=((ha*31)+a[i]-'0')%MOD;
        hb = ((hb*31) +b[i]-'0')%MOD;
    }
    for(i=0;i<lenb-1;i++){
        Mb=(Mb*31)%MOD;
    }
    for(i=0;i<=lena-lenb;i++){
        if(ha==hb){
            for(j=0;j<lenb;j++){
                if(b[j]!=a[j+i]) break;

            }
            if(j==lenb){
                printf("Lucky\n");
                return 0;
            }
        }
        if(i!=lena-lenb){
            temp=((a[i]-'0')*Mb)%MOD;
            if(ha < temp) ha+=MOD;
            ha = (((ha-temp)*31)+a[i+lenb]-'0')%MOD;
        }
    }

printf("Unlucky\n");






return 0;
}




