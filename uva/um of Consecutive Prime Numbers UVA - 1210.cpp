#include<bits/stdc++.h>
using namespace std;
#define ma 10001
bool prime[ma];
void sieve()
{
    memset(prime,true,sizeof prime);
   // prime[1]=false;
    //prime[0]=false;
    for(int i=2;i*i<=ma;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<=ma;j+=i)
            {
                prime[j]=false;
            }
        }
    }

}
int main()
{
//    ios::sync_with_stdio(false);
//    cin.tie(0);
   // freopen("out.txt","w",stdout);
    sieve();
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(!n) break;
        //int j=2;1

        int cnt=0;
        for(int i=2;i<=n;i++)
        {
            int j;
           // cout<<i<<"->"<<endl;
           if(prime[i]) j=i;
           else continue;
            int sum=0;
            for(j=i;j<=n;j++)
            {
                if(prime[j] and j!=n){
                sum+=j;
               // cout<<j<<ends;
                }
                if(sum==n)
                {
                   // cout<<"ok";
                    cnt++;
                    break;
                }
            }
            //cout<<endl;
        }
        //cout<<endl;
        if(prime[n]) cnt++;
        printf("%d\n",cnt);
    }
}
