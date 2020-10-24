#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>vec;
void Find()
{
    for(int i=1;i<=1000;i++)
    {
        int cnt=0;
        for(int j=1;j*j<=i;j++)
        {
            if(i%j==0)
            {
                if(i/j==j) cnt++;
                else cnt+=2;
            }
        }
        vec.push_back({i,cnt});
//        cout<<i<<"-> "<<cnt<<endl;
    }
}
bool sortby(pair<int,int>x, pair<int,int>y)
{
    if(x.second==y.second) return (x.first>y.first);
    return (x.second<y.second);
}
int main()
{
//    freopen("out.txt","w",stdout);
    Find();
    sort(vec.begin(),vec.end(),sortby);
    int t,tks=0;
    scanf("%d",&t);
    while(t--)
    {
        tks++;
        int n;
        scanf("%d",&n);
//        for(int i=0;i<1000;i++)
        printf("Case %d: %d\n",tks,vec[n-1].first);

    }
}
