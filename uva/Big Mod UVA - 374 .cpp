#include<bits/stdc++.h>
using namespace std;
//long long cnt=0;
long long binpow(long long a, long long b, long long m) {
    a %= m;

    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        //cnt++;
        b >>= 1;
    }
    return res;
}

int main()
{
   // freopen("out.txt","w",stdout);
     ios::sync_with_stdio(false);
  cin.tie(0);
    long long b,p,m;
    while(scanf("%lld %lld %lld",&b,&p,&m)!=EOF){

   // cout<<'\n';
  // getchar();
    long long r;
    r=binpow(b,p,m);
    //cout<<cnt<<ends;
    cout<<r<<'\n';
    }

}
