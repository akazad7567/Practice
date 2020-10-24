#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll k;
    while(scanf("%lld",&k)!=EOF)
    {
        if(k==0ll) return 0;
        ll n,m,x,y;
        cin>>n>>m;
        for(ll i=0;i<k;i++)
        {
            cin>>x>>y;
            if(x==n|| x==m || y==n || y==m) cout<<"divisa\n";
            else if(x<n && y>m) cout<<"NO\n";
            else if(x>n && y<m) cout<<"SE\n";
            else if(x>n && y>m) cout<<"NE\n";
            else if(x<n && y<m) cout<<"SO\n";

        }
    }
}

