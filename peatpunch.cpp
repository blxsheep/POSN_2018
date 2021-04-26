// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
stack <pair<int ,int> > st;
int a[100100];
int main(){
    int q,l,i,j,now,power;
    scanf("%d %d",&l,&q);
    for(i=0;i<l;i++){
        scanf("%d",&now);
        while(!st.empty()&& st.top().first >now) st.pop();
        if(st.empty()) power=0;
        else power=max(st.top().second,now-st.top().first);
        a[i]=power;
        st.push(make_pair(now,power));



    }
    sort(a,a+l);
    while(q--){
        scanf("%d",&now);
        printf("%d\n",l-(upper_bound(a,a+l,now)-a));
    }







return 0;
}




