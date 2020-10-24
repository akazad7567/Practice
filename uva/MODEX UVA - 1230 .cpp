#include<bits/stdc++.h>
using namespace std;
long long cnt=0;
long long binpow(long long a, long long b, long long m) {
    a %= m;

    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        cnt++;
        b >>= 1;
    }
    return res;
}

int main()
{
   // freopen("out.txt","w",stdout);
    // ios::sync_with_stdio(false);
  //cin.tie(0);
    int t,t2;
    while(scanf("%d",&t)!=EOF){
            if(t==0) return 0;
    t2=t;
    while(t2--){
    long long a,b,m;
    cin>>a>>b>>m;
    long long r;
    r=binpow(a,b,m);
    //cout<<cnt<<ends;
    cout<<r<<'\n';
    }
    }
}
