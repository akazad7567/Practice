#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//vector<ll>v(100000,0);
#define ma 1000000000
char ch2[ma];
int ch[100000000];

int main()
{
    //freopen("out.txt","w",stdout);
    memset(ch,0,sizeof ch);
    scanf("%[^\n]",&ch2);

    int j=0,sum=0;
    for(int i=strlen(ch2)-1;i>=0;i--)
    {
        ch[j++]=((int)ch2[i]-48);
        //cout<<ch[j-1];
      //  sum+=ch[j-1];
    }
if(!strcmp(ch2,"0")) return 0;
int l2=strlen(ch2);

sum=0;

    while(scanf(" %[^\n]",&ch2)!=EOF)
    {
        if(!strcmp(ch2,"0")) break;
        //if(strlen(ch2)==1 and ((int) ch2[0]-48)==0) break;

        int l=strlen(ch2),c1=0,c2=0,cnt=0;
        if(l>l2) l2=l;

        for(int i=l-1,k=0;k<l2;i--,k++)
        {

           if(k<l) ch[k]=ch[k] +((int)ch2[i]-48)+c2;
           else ch[k]=ch[k]+c2;


            if(ch[l2-1]>9 and k==l2-1)
            {
                c1=ch[k]%10;
                c2=ch[k]/10;
                ch[k]=c1;
                ch[k+1]=c2;
                cnt++;
                l2++;

                break;
            }
            if(ch[k]>9)
            {

                c1=ch[k]%10;
                c2=ch[k]/10;
                ch[k]=c1;

            }
            else c2=0;

        }

    }
    ll f=0;
     for(int i=l2-1;i>=0;i--)
     {
         if(ch[i]){
         f=i;
         break;
         }
     }
     if(f==0 and ch[f]==0) {
            cout<<'0'<<endl;
            return 0;
     }
      for(int i=f;i>=0;i--)
     {

        cout<<ch[i];
     }
        cout<<endl;

}
