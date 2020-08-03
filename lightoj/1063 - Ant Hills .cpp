#include<bits/stdc++.h>
using namespace std;
#define MAX 10010
vector<int>adj[MAX];
vector<bool>vis(MAX,false);
vector<int>tin(MAX,0),low(MAX,0),ans(MAX,0);
int timer=0,cnt=0;
void add(int a,int b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);

}
void CLR(int n)
{
    for(int i=0;i<=n;i++)
    {
        adj[i].clear();
        vis[i]=false;
        tin[i]=0,low[i]=0;
        ans[i]=0;

    }
    timer=0;
}

void dfs(int v,int p=-1)
{
    int child=0;
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
            if(tin[v]<=low[to] and p!=-1)
            {
                ans[v]=1;
            }
            child++;
        }
    }
    if(p==-1 and child>1)
    {
        ans[v]=1;
    }

}
int findAns(int n)
{
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        cnt+=ans[i];
    }
    return cnt;
}
int main()
{
    freopen("out.txt","w",stdout);
    int t,n,m;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d %d",&n,&m);
        for(int i=0;i<m;i++)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            add(a,b);
        }

        dfs(1);
        int re=findAns(n);
        printf("Case %d: %d\n",i,re);
        CLR(n);
    }
}
