#include<bits/stdc++.h>
using namespace std;
map<string,vector<string>>vec;
map<string,int>vis;

queue<string>q;
int m;
bool flag=false;

void dfs(string v,string p)
{

    vis[v]=1;
    for(string it:vec[v])
    {
        if(vis[it]==1)
        {
            flag=true;
            break;
        }
        if(vis[it]==0)
        {
            dfs(it,v);
        }
    }
    vis[v]=2;
}
int main()
{
    int t,tks=0;
    scanf("%d",&t);
    while(t--)
    {
//        for(int i=0;i<2;i++) cout<<pr[i].first<<endl;
        vector<pair<string,string>>pr;
        string a,b;
        tks++;
        scanf("%d",&m);
        for(int i=0;i<m;i++)
        {
            cin>>a>>b;
            vec[a].push_back(b);
            pr.push_back({a,b});
        }

        for(int i=0;i<m;i++)
        {
            string u=pr[i].first;
            string v="-1";
//            cout<<u<<"-> "<<vis[u]<<endl;
            if(vis[u]==0) dfs(u,v);
            if(flag) break;

        }
        if(flag) printf("Case %d: No\n",tks);
        else printf("Case %d: Yes\n",tks);

        vis.clear();
        flag=false;
        vec.clear();
//        for(int i=0;i<m;i++)
//        {
//            string u=pr[i].first;
//            vec[u].clear();
//        }

    }
}
