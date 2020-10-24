#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll r,c,t;
    cin>>t;
    while(t--)
    {
        ll mi=1e8,ma=-1e8;
       cin>>r;
       for(int i=0;i<r;i++)
       {
           cin>>c;
           mi=min(mi,c);
           ma=max(ma,c);
       }
       cout<<((ma-mi)*2ll)<<'\n';
    }
}


