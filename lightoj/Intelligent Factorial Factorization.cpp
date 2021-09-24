#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int>prime;
int vis[100];
int ar[110];

void fndPrime()
{
    for(int i=3;i<12;i+=2)
    {
        if(vis[i]==0){
        for(int j=i*i;j<=12;j+=2*i)
        {
           vis[j]=1;
        }
        }
    }
    for(int i=4;i<=12;i+=2)
    {
        vis[i]=1;
    }
    for(int i=2;i<12;i++)
    {
        if(vis[i]==0) prime.push_back(i);
    }
}
void cal(int n)
{
    for(int i=0; i<prime.size() and prime[i]*prime[i]<=n; i++)
    {
        int cnt=0;
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n/=prime[i];
                cnt++;
            }
        }
        ar[prime[i]]+=cnt;
//            cout<<prime.size()<<endl;
//            cout<<prime[i]<<' '<<cnt<<endl;
//            cout<<n<<' '<<prime[i]*prime[i]<<endl;
    }
    if(n>1) ar[n]++;
}
int main()
{
//    freopen("out.txt","w",stdout);
    fndPrime();
    int t,tks=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        memset(ar,0,sizeof ar);
        for(int i=2;i<=n;i++)
        {
            cal(i);
        }
        int cnt=0;

        for(int i=2;i<=n;i++)
        {
            if(ar[i])
            {
                cnt++;
            }
        }
        cout<<"Case "<<++tks<<": "<<n<<" = ";
        for(int i=2;i<=n;i++)
        {
            if(ar[i])
            {
                if(cnt>1)
                {
                    cout<<i<<" ("<<ar[i]<<") * ";
                }
                else cout<<i<<" ("<<ar[i]<<")";
                cnt--;
        }
        }
        cout<<endl;

    }
}
