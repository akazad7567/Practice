#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
int main()

{
    LL a,b;
    bool c=true;
    while(scanf("%lld%lld",&a,&b)==EOF)
    {
       // cin>>a>>b;
        LL d=max(a,b)-min(a,b);
        cout<<d<<'\n';
    }
}
