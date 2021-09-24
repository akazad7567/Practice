#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int FLAG_SIZE=100000100;
const int PRIME_SIZE = 5761500;
ll flag[FLAG_SIZE/64+10];
vector<int>vec;
int mx=5761460;
unsigned int dp[PRIME_SIZE];
const ll mod=4294967296;

void sieve()
{
    vec.push_back(2);
 long long i,j,k;
    for(i=3;i<FLAG_SIZE;i+=2)
         if(!(flag[i/64]&(1LL<<(i%64))))
                for(j=i*i;j<FLAG_SIZE;j+=2*i)
                    flag[j/64]|=(1LL<<(j%64));

 for (int i=3;i<FLAG_SIZE;i+=2)
        if(!(flag[i/64]&(1LL<<(i%64)))) vec.push_back(i);

//    for(int i=0;i<100;i++) cout<<i<<"-> "<<vec[i]<<endl;
}

ll Binary_search(ll n)
{
    ll low=0,high=vec.size()-1;
    while(low<=high)
    {
        ll mid=(low+high)/2;
        if(vec[mid]<=n)
        {
            low=mid+1;
        }
        else high=mid-1;
    }
    return low-1;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    dp[0]=2;
//    int sz=vec.size();
//    cout<<sz<<endl;
//    cout<<vec[sz-1]<<endl;
    for(int i=1;i<vec.size();i++) dp[i]=(dp[i-1]*vec[i])%mod;
    int t,tks=0;
    cin>>t;
    while(t--)
    {
        unsigned long long n;
        cin>>n;
        unsigned long long ans=1;
        for(int i=0;i<vec.size() and vec[i]<=n/vec[i];i++)
        {
            unsigned long long x=vec[i];
            while(x*vec[i]<=n)
            {
                x*=vec[i];
            }
            x/=vec[i];
            ans=((ans%mod)*(x%mod))%mod;

        }

        unsigned long long t=Binary_search(n);
        ans=((ans%mod)*(unsigned long long)(dp[t]%mod))%mod;
        cout<<"Case "<<++tks<<": "<<ans<<endl;

    }
}
