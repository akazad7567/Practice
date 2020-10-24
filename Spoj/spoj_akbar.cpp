#include<bits/stdc++.h>
using namespace std;

//vector<int>soldier_explored(n);
/*
12
4 4 2
1 2
1 3
3 4
4 2
1 0
3 2
*/
typedef pair<int,int> pi;
//vector<int>d(1000010,0);
//vector<vector<int> >adj(1000010);
//vector<bool> visited(1000010,false);
//vector<pi>soldier_explored;
//vector<int> done(1000010,0);

bool valid=true;

void bfs(int u,int strength,vector<bool> &visited,vector<vector<int> >&adj,vector<int> &done,vector<int>&d)
{
    //cout<<"cu_node= ";

    queue<int>q;

    q.push(u);

    visited[u]=true;

    d[u]=0;
    // cout<<"terminate2\n";
    while(!q.empty())
    {
        //cout<<"terminate2\n";
        int cu_node=q.front();
        q.pop();
        if(strength<d[cu_node])
            break;
        if(done[cu_node]==1)
        {
            valid=false;
            break;
        }
        //cout<<"i= ";
        for(int i : adj[cu_node])
        {
            //cout<<i<<' ';
            if(!visited[i])
            {
                d[i]=d[cu_node]+1;
                if(d[i]<=strength)
                {
                    visited[i]=true;

                }
                q.push(i);
            }
        }
        // cout<<endl;
        done[cu_node]=1;
        // cout<<cu_node<<' ';


    }
    //  cout<<endl;



}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>d(1000010,0);
        vector<vector<int> >adj(1000010);
        vector<bool> visited(1000010,false);
        vector<pi>soldier_explored;
        vector<int> done(1000010,0);
        valid=true;
        int n,r,m;//n->number of node r->number of road m->number of soldier
        scanf("%d %d %d",&n,&r,&m);

        int t_r=r,a,b;
        while(t_r--)
        {
            scanf("%d %d",&a,&b);
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        //cout<<"next->\n";
        int t_m=m;
        while(t_m--)
        {
            scanf("%d %d",&a,&b);
            soldier_explored.push_back({a,b});
        }
        //cout<<"next->\n";
        //cout<<soldier_explored.size()<<endl;
        for(int i=0; i<soldier_explored.size(); i++)
        {
            int u=soldier_explored[i].first;
            int strength=soldier_explored[i].second;
            // cout<<u<<' '<<strength<<endl;
            bfs(u,strength,visited,adj,done,d);
            // cout<<"\n valid= "<<valid<<endl;
            if(!valid)
                break;
        }
        // cout<<"terminate1\n";

        for(int i=1; i<=n; i++)
        {
            if(done[i]==0)
            {
                valid=false;
                // cout<<i;
                // cout<<" break\n";
                break;
            }
        }
        // cout<<"terminate3\n";
        if(valid)
            cout<<"Yes\n";
        else
            cout<<"No\n";

    }

}
