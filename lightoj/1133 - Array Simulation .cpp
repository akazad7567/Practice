#include<bits/stdc++.h>
using namespace std;

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
        vector<int>vec;
        for(int i=0; i<n; i++)
        {
            int tmp;
            scanf("%d",&tmp);
            vec.push_back(tmp);
        }
//        getchar();
        cin.ignore();
        for(int i=0; i<m; i++)
        {
            int x,y;
//            cin.ignore();
            string str;
            getline(cin,str);
            stringstream ss(str);
            string str2;
            ss>>str2;
            if(str2[0]=='S')
            {
                ss>>x;
                for(int i=0;i<n;i++) vec[i]+=x;
            }
            else if(str2[0]=='M')
            {
                ss>>x;
                for(int i=0;i<n;i++) vec[i]*=x;
            }
            else if(str2[0]=='D')
            {
                ss>>x;
                for(int i=0;i<n;i++) vec[i]/=x;
            }
            else if(str[0]=='R')
            {
                reverse(vec.begin(),vec.end());
            }
            else
            {
                ss>>x;
                ss>>y;
                swap(vec[x],vec[y]);
            }



        }
        printf("Case %d:\n",tks);
        for(int i=0;i<n-1;i++)
        {
            printf("%d ",vec[i]);
        }
        printf("%d\n",vec[n-1]);
    }
}
