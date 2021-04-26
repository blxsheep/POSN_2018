// Never Give up. May be clutch shot threes make you win.
#include<bits/stdc++.h>
using namespace std;
stack<int> st;

int main()
{
    int i,n,q,a,k;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&n);
        k=1;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a);
            while(!st.empty() && st.top()==k)
            {
                st.pop();
                k++;
            }
            if(a==k) k++;
            else st.push(a);


        }
        while(!st.empty() && st.top()==k){
            st.pop(); k++;
        }
        if(k==n+1) printf("yes\n");
        else printf("no\n");
        while(!st.empty())
        {
            st.pop();
        }
    }







    return 0;
}




