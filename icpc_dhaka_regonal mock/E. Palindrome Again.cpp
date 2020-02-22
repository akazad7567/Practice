#include<bits/stdc++.h>
using namespace std;
int main()

{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,n,k,l,div,div2,next=0;
    string s1,s2,s3;
    cin>>t;
    int o_cnt=0;
    while(t--)
    {
        o_cnt++;
        cin>>n>>k;
        cin>>s1;
        l=s1.size();
        div=ceil((n*1.0)/2.0);
        if(k>div)
        {
            cout<<"Case "<<o_cnt<<": ";
            cout<<-1<<'\n';
            s2.erase(),s1.erase(),s3.erase();
            continue;
        }
        div2=n/2;
        s2.insert(0,s1,0,div2);
        s3.insert(0,s1,div,s1.size());
        //cout<<s2<<' '<<s3<<'\n';
        int cnt=0,loop=s2.size()-1;
        reverse(s2.begin(),s2.end());
        for(int i=0,j=0; i<=loop; i++,j++)
        {
            // cout<<s3[j]<<ends<<s2[i]<<'\n';
            if(s3[j]==s2[i])
            {
                s2[i]='0';

            }
            else
            {

                int flag=0;

                // cout<<s2[i]<<ends<<s3[j]<<ends;
                for(int k=0; k<loop; k++)
                {
                    if(s2[k]==s3[j] and s2[k]!='0')
                    {
                        //cout<<s2[i]<<'\n';
                        swap(s2[i],s2[k]);
                        s2[i]='0';
                        flag=1;
                        break;
                    }
                }
                if(flag)
                    cnt++;
                else
                    next++;
                // cout<<s3[j]<<ends<<s2[k-1]<<ends<<cnt<<'\n';
            }
        }
        // cout<<cnt<<ends<<next<<'\n';
        cout<<"Case "<<o_cnt<<": ";
        cout<<(cnt+(next/2))<<'\n';
        s2.erase(),s1.erase(),s3.erase();
        next=0;


    }
}
