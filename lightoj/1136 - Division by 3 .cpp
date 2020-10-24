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
        int a,b;
        scanf("%d %d",&a,&b);
        int ans=0;
        if(a>2)
        {
            if((a-1)%3!=0 and a%3!=0)
                ans++;
        }
        if(b-a<10)
        {
//            if(a==2) a++,ans++;
            int cnt=0;
            for(int i=a; i<=b; i++)
            {
                if(i==2)
                    ans++;
                else if(i%3!=0)
                    cnt++;
                else
                    ans++,cnt=0;
                if(cnt==2)
                    ans++;
            }
            printf("Case %d: %d\n",tks,ans);
            continue;

        }
        if(a==2) a++,ans++;
        else if(a%3!=0 and (a+1)%3!=0) a+=2,ans++;
        else if(a%3!=0) a++;
        if(b%3==0) b--,ans++;
        else if(b%3!=0 and (b-1)%3==0) ans++,b-=2;

        ans+=((b-a+1)/3)*2;
//        cout<<a<<' '<<b<<endl;

        printf("Case %d: %d\n",tks,ans);

    }
}
