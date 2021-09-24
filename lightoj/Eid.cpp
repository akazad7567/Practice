#include<bits/stdc++.h>
using namespace std;
vector<int>prime;
#define M 10005
bool br[M];
int F[M];
string ans;
void sieve()
{
    for(int i=3;i<M;i+=2)
    {
        for(int j=i*i;j<M;j+=2*i)
        {
            br[j]=1;
        }
    }
    for(int i=4;i<M;i+=2) br[i]=1;
    for(int i=2;i<M;i++)
    {
        if(br[i]==false) prime.push_back(i);
    }
}

string mul(string s1,int n)
{
    string tmp="";
    int carry=0;
    for(int i=0;i<s1.size();i++)
    {
        int v=((s1[i]-'0')*n)+carry;
        tmp+=((v%10)+'0');
        carry=v/10;
    }
    while(carry)
    {
        tmp+=(carry%10)+'0';
        carry/=10;
    }
    return tmp;
}

int bmod(int a,int n)
{
    if(n==0)
    {
        return 1;
    }
    int ret=bmod(a,n/2);
    ret=ret*ret;
    if(n&1) ret=ret*a;
    return ret;
}
int main()
{
//    freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    int t,tks=0;
    cin>>t;
    while(t--)
    {

       int n;
       cin>>n;
       int ar[n+10];
       for(int i=0;i<n;i++) cin>>ar[i];


       for(int i=0;i<n;i++)
       {
           int v=ar[i];
           for(int j=0;j<prime.size() and prime[j]*prime[j]<=v;j++)
           {
               if(br[v]==false) break;
               int cnt=0;
               if(v%prime[j]==0)
               {
                   while(v%prime[j]==0)
                   {
                       v/=prime[j];
                       cnt++;
                   }
                   F[prime[j]]=max(F[prime[j]],cnt);
//                   cout<<prime[j]<<' '<<cnt<<' '<<F[prime[j]]<<endl;
               }



           }
           if(v>=1) F[v]=max(F[v],1);
//           cout<<v<<' '<<F[v]<<endl;
       }
       bool b=false;

       for(int i=1;i<M;i++)
       {
           if(F[i])
           {
              int cnt=F[i];
              int val=bmod(i,cnt);
//              while(cnt--)
//              {
                  if(!b)
                  {
                      ans=to_string(val);
                      reverse(ans.begin(),ans.end());
                      b=true;
                  }
                  else
                  {
                      ans=mul(ans,val);
                  }
//                  cout<<ans<<endl;

//              }
              F[i]=0;
           }
       }

       reverse(ans.begin(),ans.end());
       cout<<"Case "<<++tks<<": "<<ans<<endl;
    }
}
