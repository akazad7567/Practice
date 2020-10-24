#include<bits/stdc++.h>
using namespace std;
#define MAX 200050
vector<int>adj[MAX];
vector<bool>vis(MAX,false);
vector<int>d(MAX,0);
int enemy=0,frnd=0;
int fenemy=0,ffrnd=0;
void clean()
{
   for(int i=0;i<MAX;i++) adj[i].clear(),vis[i]=false,d[i]=0;
   enemy=0,frnd=0;
   fenemy=0,ffrnd=0;
}
int bfs(int st)
{

    queue<int>q;
    q.push(st);
    vis[st]=true;
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        if(d[p] & 1) enemy++;
        else frnd++;
        for(int it:adj[p])
        {
            if(vis[it]==false)
            {
                vis[it]=true;
                q.push(it);
                d[it]=d[p]+1;
            }
        }
    }
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
        int n;
        scanf("%d",&n);
        int mx=0;
        for(int i=0;i<n;i++)
        {
            int u,v,sz;
            scanf("%d %d",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int ans=0;
        for(int i=1;i<MAX;i++)
        {
            enemy=0,frnd=0;
            for(int it:adj[i]){
            if(vis[it]==false) {bfs(it);
//            cout<<it<<"-> "<<enemy<<' '<<frnd<<endl;
            ans+=max(enemy,frnd);
            }
            }
        }
//        cout<<fenemy<<' '<<ffrnd<<endl;
        printf("Case %d: %d\n",tks,ans);
        clean();
    }
}
