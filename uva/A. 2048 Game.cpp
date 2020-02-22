#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,n,a;
    cin>>q;
    while(q--)
    {
        int j=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a<2048) ar[j++];
            if(a==2040)
            {
                flag=1;
            }

        }

        for(int i=0;i<j;i++)
        {
            sm=ar[i];
            for(int k=i+1;k<j-1;k++)
            {
                sm+=ar[k];
                if(sm==2048)
                {
                    flag=1;
                   goto g1;
                }
            }
        }
        g1:
            {

            }
    }
}
