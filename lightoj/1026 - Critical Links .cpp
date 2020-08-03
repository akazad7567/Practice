#include<bits/stdc++.h>
using namespace std;
#define MAX 10010
vector<int>adj[MAX];
vector<int>tin(MAX,0),low(MAX,0);
vector<bool>vis(MAX,false);
vector<pair<int,int>>vec;
int n;
int timer=0,cnt=0;

void clean()
{
    for(int i=0;i<=n;i++)
    {
        adj[i].clear();
        tin[i]=0,low[i]=0;
        vis[i]=false;

    }
    vec.clear();
    cnt=0;
}
bool sortby(const pair<int,int>&a,const pair<int,int>&b)
{
    if(a.first==b.first) return a.second<b.second;
    return a.first<b.first;
}
void dfs(int v,int p=-1)
{
    vis[v]=true;
    tin[v]=low[v]=timer++;


    for(int to:adj[v])
    {

        if(to==p) continue;
        if(vis[to]) low[v]=min(low[v],tin[to]);
        else
        {
            dfs(to,v);
            low[v]=min(low[v],low[to]);
            if(tin[v]<low[to])
            {
                int t1=v,t2=to;
                if(v>to) swap(t1,t2);
                vec.push_back({t1,t2});
                cnt++;


            }
        }
    }

}

void findBridge()
{
    for(int i=0;i<n;i++)
    {
        timer=0;
        if(vis[i]==false) dfs(i);

    }
    sort(vec.begin(),vec.end(),sortby);

}
int main()
{
//    freopen("out.txt","w",stdout);
    int t;
    scanf("%d",&t);
    int tks=0;
    while(t--)
    {
        tks++;
        scanf("%d",&n);
        int a,k,b;
        char ch;
        for(int i=0;i<n;i++)
        {

            scanf("%d %c%d%c",&a,&ch,&k,&ch);
            for(int j=0;j<k;j++)
            {
                scanf("%d",&b);
//                cout<<a<<' '<<ch<<k<<ch<<' '<<b<<endl;
                adj[a].push_back(b);
                adj[b].push_back(a);

            }

        }

        findBridge();
//        dfs(0);
        printf("Case %d:\n",tks);
        printf("%d critical links\n",cnt);
        for(auto it=vec.begin();it!=vec.end();it++)
        {
//            cout<<it->first<<" - "<<it->second<<endl;
              printf("%d - %d\n",it->first,it->second);
        }

        clean();
    }
}
