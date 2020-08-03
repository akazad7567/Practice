#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll lmt=1e15+10;
int main()
{
    ll n=0;
    scanf("%lld",&n);
    ll cnt=0;
    for(ll i=1;:i+=2)
    {
        n+=i;
        cnt++;
        if(n>lmt) break;
    }
    cout<<cnt<<endl;

}
