#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000010
bool prime[MAX];
int ar[10000000]={0};
int cnt=0;
void sieve(int n)
{
    memset(prime,true,sizeof prime);
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
    }


}


void check(int n)
{
    //ar[2]=cnt;
    int flag=1,tmp,tmp2,tmp3,tmp4,tmp5;
    for(int i=2;i<=n;i++)
    {
        //cout<<i<<"-> ";
        flag=1,tmp3=0,tmp4=0,tmp5=0;
        if(prime[i])
        {
            tmp=i;
            tmp2=i;
            while(tmp>=10)
            {
                tmp3=log10(tmp2);
               tmp3=ceil(pow(10,tmp3)*1.0);
                tmp4=tmp2%tmp3;
                 tmp2=tmp4;
                 //cout<<tmp4<<' ';
                if(tmp%10==0 or prime[tmp4]==false)
                {
                    flag=0;
                    break;
                }
               tmp/=10;

            }
            //tmp=i%10;
            if(flag)
            {
                cnt++;
                ar[i]=cnt;
            }
        }
        ar[i]=cnt;
        //cout<<endl;
    }
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
    int n=MAX;
    sieve(n);
    check(n);
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        cout<<ar[N]<<endl;
    }
}
