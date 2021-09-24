#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    int t,tks=0;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        ll prv=1,div,nxt;
        ll ans=0;
        if(n<4)
        {
            cout<<"Case "<<++tks<<": "<<ans<<endl;
            continue;
        }
        while(1)
        {
            div=(n/prv);
            nxt=(n/div)+1;
            if(nxt>=n)
            {
//                if(prv==1) prv=0;
                ans+=(div*((((n+1)*n)/2)-(((prv)*(prv-1))/2)));
                break;
            }
//            if(prv==1) prv=0;
            ans+=(div*(((nxt*(nxt-1))/2)-(((prv)*(prv-1))/2)));
            prv=nxt;
//            cout<<ans<<endl;
        }
//        cout<<ans<<endl;
        cout<<"Case "<<++tks<<": "<<ans-((((n+1)*n)/2)+n-1)<<endl;
    }
}
