#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>vec;

void cal()
{
    vec.push_back({1,1});
    for(int i=2;i<=1000;i++)
    {
        int cnt=0;
        for(int j=1;j*j<=i;j++)
        {
            if(i%j==0)
            {
                if((i/j)!=j) cnt+=2;
                else cnt++;
            }
        }
        vec.push_back({i,cnt});
    }
}

bool sortby(pair<int,int>&a,pair<int,int>&b)
{
    if(a.second<b.second) return true;
    if(a.second==b.second and a.first>b.first) return true;
    return false;
}
int main()
{
    cal();
    sort(vec.begin(),vec.end(),sortby);
    int t,tks=0;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        cout<<"Case "<<++tks<<": "<<vec[n-1].first<<endl;


    }
}
