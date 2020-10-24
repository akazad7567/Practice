#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct friends
{
    string s,s2,s3;
    int gftA;
    int nF;
    int gftG;
    int tot;

};



int main()
{
    //freopen("out.txt","w",stdout);
    int n;
    while(scanf("%d%*c",&n)!=EOF)
    {

        int j=0;
        friends a[n];
        //a[n].tot={0};
        for(int i=0; i<n; i++) a[i].tot=0;
        for(int i=0; i<n; i++) cin>>a[i].s;
        for(int l=0; l<n; l++)
        {
            //  scanf("%*c");
            cin>>a[j].s2;
            cin>>a[j].gftA;
            // a[l].tot=0;
            cin>>a[j].nF;
            //friends a2[a[j].nf];
            // scanf("%*c");
            for(int i=0; i<n; i++)
            {
                if(a[i].s==a[j].s2 && a[j].gftA!=0 && a[j].nF!=0)
                {
                    a[i].tot-=(a[j].gftA/a[j].nF)*a[j].nF;
                    //cout<<a[i].tot<<endl;
                }
            }
            for(int i=0; i<a[j].nF; i++)
            {
                cin>>a[i].s3;
                for(int k=0; k<n; k++)
                {
                    if(a[k].s==a[i].s3 && a[j].gftA!=0 && a[j].nF!=0)
                    {
                        a[k].tot+=(a[j].gftA/a[j].nF);
                    }
                }
            }
            j++;
            //cout<<'\t'<<j<<endl;
        }
        for(int i=0; i<n; i++) cout<<a[i].s<<' '<<a[i].tot<<'\n';
        if(cin>>n) cout<<endl;
        else break;


    }
}
