#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cases, caseno;
ll n, K, MOD;
ll A[1001000];
int main()
{
    //freopen("out.txt","w",stdout);
    ll i, i1, i2, i3,iK;
    scanf("%d", &cases);
    while( cases-- )
    {
        ll cnt=0;
        scanf("%d %d %d", &n, &K, &MOD);
        for( i = 0; i < n; i++ )
            scanf("%d", &A[i]);
        ll res = 0,r=0;
        res+=(K*(pow(n,K-1)));//number of A[i] occurring;
        for( i1 = 0; i1 < n; i1++ )
        {
            r=(r+(res*A[i1]))%MOD;
        }
        cout<<"Case "<<++cnt<<": "<<r<<endl;
    }
}
