#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll mod=1e9;


ll cal1(ll n,ll k)
{
    if(k==0)
    {
        return 1LL;
    }
    ll r=cal1(n,k/2);
    r*=r;
    r%=mod;
    if(k&1LL) r*=n;
    return r%mod;

}

double cal2(ll n,ll k)
{
    if(k==0)
    {
        return 1LL;
    }

    double r=cal2(n,k/2);
    r*=r;

    while(r>=(double) 1000) r/=10.0;
    if(k&1LL) r*=(double)n;
    while(r>=(double)1000) r/=10.0;
    return r;
}
int main()
{
//    freopen("out.txt","w",stdout);
    int t,tks=0;
    scanf("%d",&t);
    while(t--)
    {
        ll n,k;
        scanf("%lld %lld",&n,&k);
        ll lsb=cal1(n,k);
        ll msb=cal2(n,k);
        while(msb>=1000) msb/=10;
        lsb%=1000;

        printf("Case %d: %03d %03d\n",++tks,(int)msb,(int)lsb);
//        cout<<"Case "<<++tks<<": "<<msb<<' ';
//        lsb%=1000;
////        cout<<lsb<<endl;
//        if(lsb<100)
//        {
//            ll tmp=lsb;
//            ll cnt=0;
//            while(tmp<100 and cnt<3) cnt++,tmp*=10, cout<<0;
//            if(lsb) cout<<lsb;
//            cout<<endl;
//        }
//        else cout<<lsb%1000<<endl;
    }
}
