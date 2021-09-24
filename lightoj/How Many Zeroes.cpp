#include<bits/stdc++.h>
using namespace std;
#define XOX (-D XOX
typedef long long ll;
//debug for single line start from here
template<typename T>
void out(T x) { cout << x << endl; exit(0); }
#define watch(x) cout << (#x) << " is " << (x) << endl //debug for single line ending here

//debug for multiple line start from here
vector<string> vec_splitter(string s) {
	s += ',';
	vector<string> res;
	while(!s.empty()) {
		res.push_back(s.substr(0, s.find(',')));
		s = s.substr(s.find(',') + 1);
	}
	return res;
}
void debug_out(
vector<string> __attribute__ ((unused)) args,
__attribute__ ((unused)) int idx,
__attribute__ ((unused)) int LINE_NUM) { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T) {
	if(idx > 0) cerr << ", "; else cerr << "Line(" << LINE_NUM << ") ";
	stringstream ss; ss << H;
	cerr << args[idx] << " = " << ss.str();
	debug_out(args, idx + 1, LINE_NUM, T...);
}
#ifdef XOX
#define debug(...) debug_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
#else
#define debug(...) 42
#endif
typedef long long ll;
string a,b,s;
ll dp1[11][2][2];
ll dp2[11][2];

void ini(string str,bool chk)
{
    string tmp="";
    for(int i=0;i<10;i++)
    {
        if(10-str.size()>i) tmp+="0";
        else tmp+=str[str.size()+i-10];
    }
    if(chk)
    {
        for(int i=9;i>=0;i--)
        {
            if(tmp[i]-'0'>0)
            {
                tmp[i]--;
                break;
            }
            else tmp[i]+=9;
        }
    }
    s=tmp;
}
ll f2(int pos,bool isSmall)
{
    if(pos==s.size()) return 1LL;
    if(dp2[pos][isSmall]!=-1) return dp2[pos][isSmall];
    int v=s[pos]-'0';
    if(isSmall) v=9;
    ll ret=0;
    for(int i=0;i<=v;i++)
    {
        ret+=f2(pos+1,isSmall|(i<v));
    }
    return dp2[pos][isSmall]=ret;

}
ll f(int pos,bool isSmall,bool hasStart)
{
    if(pos==s.size()) return 0LL;
    if(dp1[pos][isSmall][hasStart]!=-1) return dp1[pos][isSmall][hasStart];

    int v=s[pos]-'0';
    if(isSmall) v=9;
    ll ret=0;
    for(int i=0;i<=v;i++)
    {
        ret+=f(pos+1,isSmall|(i<v),hasStart|(i!=0));
        if(hasStart and i==0) ret+=f2(pos+1,isSmall|(i<v));


    }
    return dp1[pos][isSmall][hasStart]=ret;

}
int main()
{
    int t,tks=0;
    cin>>t;
    while(t--)
    {
        int cnt=0;
        cin>>a>>b;
        if(a=="0") cnt++,a[0]++;
        if(b=="0") b[0]++;
        ini(a,1);
        memset(dp1,-1,sizeof dp1);
        memset(dp2,-1,sizeof dp2);
        ll lef=f(0,0,0);
//        debug(s,lef);

        ini(b,0);
        memset(dp1,-1,sizeof dp1);
        memset(dp2,-1,sizeof dp2);
        ll rght=f(0,0,0);
//        debug(s,rght);
        cout<<"Case "<<++tks<<": "<<rght-lef+cnt<<endl;
//        cout<<s<<endl;
    }
}
