#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int const mod=10056;
ll nCr[1005][1005];
int res[1005];
void cal()
{
    nCr[0][0]=1;
    for(int i=1;i<1002;i++)
    {
        nCr[i][0]=1;
        for(int j=1;j<=i;j++)
        {
            nCr[i][j]=(nCr[i-1][j-1]+nCr[i-1][j])%mod;
        }
    }
}

void cal2()
{
    res[1]=1;
    res[2]=3;
    res[0]=1;

    for(int i=3;i<1002;i++)
    {
        for(int j=1;j<=i;j++)
        {
            res[i]+=(res[i-j]*nCr[i][j])%mod;
        }
        res[i]%=mod;
    }
}
int main()
{
//    freopen("out.txt","w",stdout);
    cal();
    cal2();
    int t,tks=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<"Case "<<++tks<<": "<<res[n]<<endl;
    }
}
