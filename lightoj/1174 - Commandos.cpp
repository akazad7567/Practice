#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pr;
#define MAX 1000
#define INF 100000000
vector<int>adj[MAX];
vector<int>key1(MAX,INF);
vector<int>key2(MAX,INF);
int n,r;

void clean()
{
    for(int i=0;i<MAX;i++)
    {
        adj[i].clear();
        key1[i]=INF;
        key2[i]=INF;
    }
}
void dijktra(int src,int chk)
{
    priority_queue<pr,vector<pr>,greater<pr>>pq;
    vector<bool>inMST(n+1,false);
    if(chk==1)
        key1[src]=0;
    else
        key2[src]=0;
    inMST[src]=true;
    pq.push({0,src});
    while(!pq.empty())
    {
        int v=pq.top().second;
        inMST[v]=true;
        pq.pop();
        for(int it:adj[v])
        {
            int u=it;
            int w=1;
            if(chk==1)
            {
                if(inMST[u]==false and key1[u]>key1[v]+w)
                {
                    key1[u]=key1[v]+w;
                    pq.push({key1[u],u});
                }
            }
            else if(chk==2)
            {
                if(inMST[u]==false and key2[u]>key2[v]+w)
                {
                    key2[u]=key2[v]+w;
                    pq.push({key2[u],u});
                }
            }
        }
    }

}
int main()
{
    int t,tks=0;
    scanf("%d",&t);
    while(t--)
    {
        tks++;
        int s,e;
        scanf("%d %d",&n,&r);
        for(int i=0; i<r; i++)
        {
            int u,v;
            scanf("%d %d",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        scanf("%d %d",&s,&e);
        dijktra(s,1);
        dijktra(e,2);
        int mx=0;
//        cout<<"ans= \n";
        for(int i=0; i<n; i++)
        {
//            cout<<key1[i]<<' '<<key2[i]<<endl;
            mx=max(key1[i]+key2[i],mx);
        }
        printf("Case %d: %d\n",tks,mx);
        clean();
    }
}
