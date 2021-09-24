#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;

struct stru
{
    string a,b,c;
};
void ini()
{
    mp["January"]=1;
    mp["February"]=2;
    mp["March"]=3;
    mp["April"]=4;
    mp["May"]=5;
    mp["June"]=6;
    mp["July"]=7;
    mp["August"]=8;
    mp["September"]=9;
    mp["October"]=10;
    mp["November"]=11;
    mp["December"]=12;
}

int d(string s)
{
    int date=0;
    int i=0;
    while(s[i]!=',')
    {
        date+=(s[i]-'0');
        if(s.size()>i+2) date*=10;
        i++;
    }
    return date;
}

int y(string s)
{
    int i=0,year=0;
    while(s.size()>i)
    {
        year+=(s[i]-'0');
        if(s.size()>i+1) year*=10;
        i++;
    }
    return year;
}
int main()
{
//    freopen("out.txt","w",stdout);
    ini();
    int t,tks=0;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        stru st;
        cin>>st.a>>st.b>>st.c;

        string month1=st.a;
        string s=st.b;
        int date1=d(s);
        s=st.c;
        int year1=y(s);

        cin>>st.a>>st.b>>st.c;
        string month2=st.a;
        s=st.b;
        int date2=d(s);
        s=st.c;
        int year2=y(s);

//        cout<<month1<<' '<<date1<<' '<< year1<<endl;
//        cout<<month2<<' '<<date2<<' '<<year2<<endl;

        int cnt=0;
        if(year1%4==0 and year1%100!=0 or year1%400==0)
        {
            if(mp[month1]>2) cnt++;
        }
        if(year2%4==0 and year2%100!=0 or year2%400==0)
        {
            if(mp[month2]<2) cnt++;
            if(mp[month2]==2 and date2<=28) cnt++;
        }

        int h=(year2/4)-(year2/100)+(year2/400);
        year1--;
        int l=(year1/4)-(year1/100)+(year1/400);
        int ans=(h-l);
        ans-=cnt;
//        cout<<cnt<<endl;
        cout<<"Case "<<++tks<<": "<<max(0,ans)<<endl;
    }
}
