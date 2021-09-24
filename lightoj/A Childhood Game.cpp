#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,tks=0;
    cin>>t;
//    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        string tmp;
        string num;
        int cnt=0;
        while(ss>>tmp)
        {
            if(cnt==0) num=tmp;
            if(cnt>0)
            {
                int n=(num[0]-'0');

                for(int i=1; i<num.size(); i++)
                {
                    n=(n*10)+(num[i]-'0');
                }
                if(tmp[0]=='A')
                {
                    if((n-1)%3==0)
                    {
                        cout<<"Case "<<++tks<<": Bob\n";
                    }
                    else cout<<"Case "<<++tks<<": Alice\n";
                    break;
                }
                else
                {
                    if(n%3==0) cout<<"Case "<<++tks<<": Alice\n";
                    else cout<<"Case "<<++tks<<": Bob\n";
                    break;
                }
            }
            cnt++;

        }
    }
}
