#include<bits/stdc++.h>
using namespace std;
int ar[10];
int div(int n)
{
    int j=0,k=n;
    for(int i=2;i<=k;i++)
    {
        if(j>=3) return j;
        if(k%i==0)
        {
            if(k%i==i)
            {
                // n/=i;
                ar[j]=i;

                j++;
            }
            else
            {
               // n/=i;
                ar[j]=i;
                j++;
                ar[j]=n/i;
                j++;

            }
        }
    }
}
int main()
{
    int t,n;

    int cnt=0;
    cin>>t;
    while(t--)
    {
        //ar[4]={0};
     cin>>n;
     int r=div(n);
     cout<<"Case #"<<++cnt<<": "<<n<<" = "<<ar[0]<<" * "<<ar[1]<<" = "<<ar[2]<<" * "<<ar[3]<<endl;

    }
}
