#include<bits/stdc++.h>
using namespace std;
vector<int>chk(32,0);
int ind=0;
int last=0;
int subs=0,add=0;
int findOne(int n)
{
    int one=0;
    ind=0;
    bool flag=true;
    while(n)
    {
       if(n%2==1) one++;
       if(one==1 and flag) flag=false,last=ind;
       chk[ind++]=n%2;
       n/=2;
    }
    return one;
}
int findAns(int m,int one)
{
    add=0;
    int ans=0;
    bool flag=true;
    int cnt=0;
    for(int i=last;i<ind;i++)
    {
        if(chk[i]==1) cnt++;
        if(chk[i]==0){
        swap(chk[i],chk[i-1]);
        last=i-1;
        flag=false;
        add=2<<(i-1);
        break;

        }
    }
    if(flag)
    {
        for(int i=0;i<one-1;i++)
        {
            if(i==0) add+=1;
            add+=2<<(i-1);
            flag=false;
        }
        add+=2<<(ind-1);
        return add;
    }
    cnt--;
    for(int i=0;i<last;i++)
    {
        if(cnt>0) chk[i]=1,cnt--;
        else chk[i]=0;
    }
    for(int i=0;i<ind;i++)
    {
        if(chk[i]==1) ans+=2<<(i-1);
    }
    if(chk[0]==1) ans++;
    return ans;
}
int main()
{
    int t,tks=0;
    scanf("%d",&t);
    while(t--)
    {
        tks++;
        int m;
        scanf("%d",&m);
        int one=findOne(m);
        int ans=findAns(m,one);
        printf("Case %d: %d\n",tks,ans);
    }
}
