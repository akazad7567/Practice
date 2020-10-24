#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define MAX 1000
typedef pair<int,int>pr;
vector<pr>adj[MAX];
int tks=0;
void clean()
{
    for(int i=0;i<MAX;i++)
    {
        adj[i].clear();
    }

}
void Dij(int n)
{
    int src=1;
    priority_queue<pr,vector<pr>,greater<pr>>pq;
    vector<int>key(n+1,INF);
    vector<bool>inMST(n+1,false);
    key[src]=0;
    pq.push({0,src});
    inMST[src]=true;

    while(!pq.empty())
    {
        int v=pq.top().second;

        inMST[v]=true;
        pq.pop();
        for(auto it:adj[v])
        {
            int u=it.first;
            int w=it.second;
//            cout<<u<<endl;
            if(inMST[u]==false and key[u]>key[v]+w)
            {
                key[u]=key[v]+w;
                pq.push({key[u],u});
            }
        }
    }
    if(key[n]==INF) printf("Case %d: Impossible\n",tks);
    else printf("Case %d: %d\n",tks,key[n]);

}

int main()
{
//    freopen("out.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        tks++;
        int n,m;
        scanf("%d %d",&n,&m);
        for(int i=0;i<m;i++)
        {
            int u,v,w;
            scanf("%d %d %d",&u,&v,&w);
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        Dij(n);
        clean();

    }

}
