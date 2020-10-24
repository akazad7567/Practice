#include<cmath>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

long long t;

int main() {
     ll lo=0;
    while(scanf("%lld", &t)!=EOF) {
        //scanf("%lld", &n);
        ll n,cn=0,cn2=0;
        lo++;
        if(t==0ll) return 0;
        for(ll i=0;i<t;i++)
        {
            cin>>n;
            if(n==0) cn++;
            else cn2++;
        }
        cout<<"Case "<<lo<<": "<<cn2-cn<<'\n';
    }
}

