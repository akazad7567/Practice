#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
//    ios::sync_with_stdio(false);
//       cin.tie(0);
//freopen("input.txt","w",stdout);
    ll t;
    cin>>t;
    ll i=1;
    while(t--)
    {
        ll l,w,h;
        cin>>l>>w>>h;
        if(l>20 || w>20 || h>20) cout<<"Case "<<i<<": "<<"bad\n";
        else cout<<"Case "<<i<<": good\n";
        i++;
       // if(t>0LL) cout<<'\n';
    }
}
