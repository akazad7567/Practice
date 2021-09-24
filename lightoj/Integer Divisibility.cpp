#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t,tks=0;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll tmp=k;
        int cnt=1;
        while(1)
        {
            if(tmp%n==0)
            {
                break;
            }
            tmp=((tmp*10)+k)%n;
            cnt++;
        }
        cout<<"Case "<<++tks<<": "<<cnt<<endl;
    }
}
