#include<bits/stdc++.h>
using namespace std;
main()
{
    //freopen("output.txt","w",stdout);
    long long n,m;
    while(cin>>n>>m)
    {
        if(m==0)
        {
            printf("%lld does not divide %lld!\n",m,n);
            continue;
        }
        long long n1,i1=0,ar[100010]= {0},i,base=0,cnt=0,k=0,flag=0;
        map<long long,int>visit;
        n1=m;
        if(n1%2==0)
        {
            ar[i1]=2;
            i1++;
            while(n1%2==0)
            {
                n1/=2;
                visit[2]++;
            }
        }
        for(i=3; i<=sqrt(m); i++)
        {
            if(n1%i==0)
            {
                ar[i1++]=i;
                while(n1%i==0)
                {

                    visit[i]++;
                    n1/=i;
                }

            }
        }
        if(n1>1)
        {
            ar[i1++]=n1;
            visit[n1]++;
        }
        for(i=0; i<i1; i++)
        {
            base=1,cnt=0;
            while(1)
            {
                k=pow(ar[i],base);
                //cout<<k<<ends;
                if(k>n)
                    break;
                base++;
                cnt=cnt+(n/k);

            }
            if(cnt<visit[ar[i]])
            {
                flag=1;
                break;
            }
        }
       // cout<<endl;
        if(flag==1)
        {
            printf("%lld does not divide %lld!\n",m,n);
        }
        else
        {
            printf("%lld divides %lld!\n",m,n);
        }
    }
}
