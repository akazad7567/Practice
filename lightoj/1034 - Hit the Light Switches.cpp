#include<bits/stdc++.h>
using namespace std;
#define MAX 100050
vector<int>adj[MAX];
vector<bool>vis(MAX,false);
vector<int>prnt(MAX);
vector<int>tpsort;
bool chk=true;

void clean()
{
    for(int i=0;i<MAX;i++)
    {
        adj[i].clear();
        vis[i]=false;
    }
    tpsort.clear();
}



void dfs(int v)
{
    vis[v]=true;
    for(int u:adj[v])
    {
        if(vis[u]==false) dfs(u);
    }
    if(chk) tpsort.push_back(v);
}

int main()
{
//    freopen("out.txt","w",stdout);
    int t,tks=0;
    scanf("%d",&t);
    while(t--)
    {
        tks++;
        int n,m;
        scanf("%d %d",&n,&m);
        for(int i=0;i<m;i++)
        {
            int u,v;
            scanf("%d %d",&u,&v);
            adj[u].push_back(v);
        }
        chk=true;

        for(int i=1;i<=n;i++)
        {
            if(vis[i]==false) dfs(i);
        }
        chk=false;
        vis.assign(n+1,false);
        int ans=0;
        for(int i=tpsort.size()-1;i>=0;i--)
        {
            int  u=tpsort[i];
            if(vis[u]==false) ans++, dfs(u);
        }
        printf("Case %d: %d\n",tks,ans);
        clean();
    }
}
