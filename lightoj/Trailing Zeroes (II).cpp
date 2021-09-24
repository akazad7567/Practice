#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
//    freopen("out.txt","w",stdout);
    int t,tks=0;
    cin>>t;
    while(t--)
    {
        ll n,r,p,q;
        cin>>n>>r>>p>>q;
        int ans1=0,ans2=100;
        ll sm=5;
        while(1)
        {
            ans1+=(n/sm);
            sm*=5;
            if(n/sm==0) break;
        }
        sm=5;
        while(1)
        {
            ans1-=((n-r)/sm);
            sm*=5;
            if((n-r)/sm==0) break;
        }
        sm=5;
        while(1)
        {
            ans1-=(r/sm);
            sm*=5;
            if(r/sm==0) break;
        }
//        cout<<ans1<<endl;


        for(int i=2;i<6;i+=3)
        {
            int cnt=0;
            while(p%i==0)
            {
                cnt++;
                p/=i;
            }
            ans2=min(ans2,cnt);
            cout<<cnt<<endl;
        }

        ans2*=q;
        cout<<ans1<<' '<<ans2<<endl;
//        ll chk=(ll) 102400000*(ll) 75287520;
//        cout<<chk<<endl;
        cout<<"Case "<<++tks<<": "<<ans1+ans2<<endl;
    }
}
