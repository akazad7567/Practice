#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll binarySearch(ll arr[], ll l, double x)
{
   for(int i=0;i<l;i++)
   {
       if(arr[i]==x) return i;
   }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll N,a,sm=0;
       cin>>N;
       double d;
        ll arr[100010]={0};
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
           // v.push_back(a);
            sm+=arr[i];
        }

     d=(sm*1.0)/(N*1.0);

    if(d==N) {
            cout<<1<<endl;
    continue;
    }
    ll result = binarySearch(arr,N , d);

    (result==-1) ? cout<<"Impossible"<<endl
    :
        cout<<result+1<<endl;
    }
    return 0;
}
