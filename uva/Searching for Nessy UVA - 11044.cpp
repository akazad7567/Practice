#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll r,c,t;
    cin>>t;
    while(t--)
    {
        scanf("%lld %lld",&r,&c);
        ll cn=0;
        r-=2;
        c-=2;
//        if(r%2==1 || c%2==1)
//
//        {
//            r--;
//            c--;
//        }
       // if(c%2==1) c--;
        for(int i=1;i<=r;i+=3)
        {
            for(int j=1;j<=c;j+=3)
            {
                cn++;
               // cout<<cn<<ends;
            }
            //cout<<endl;
        }
        cout<<cn<<'\n';
    }
}

