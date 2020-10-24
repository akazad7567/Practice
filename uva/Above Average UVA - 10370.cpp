#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int ar[10000000]={0};
int main()
{
   double t;
   cin>>t;

   while(t--)
   {
       double n,m,r1=0,r2=0,r3=0,cnt=0;
       cin>>n;
       for(int i=0;i<n;i++)
       {
           cin>>ar[i];
           r1+=ar[i];
       }
       r1=r1/(n*1.0);
       //r2=100.0/n;
       for(int i=0;i<n;i++)
       {
           if(ar[i]>r1) cnt++;
       }
       printf("%.3f",(cnt/n)*100.0);
       cout<<"%\n";
   }
}

