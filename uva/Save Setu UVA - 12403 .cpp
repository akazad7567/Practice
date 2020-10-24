#include<cmath>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

long long t;

int main() {
     ll lo=0,test;
     string s;
    cin>>test;
    while(test--) {
            //getchar();
            scanf("*c");
            cin>>s;
            if(s=="donate"){

                    cin>>t;
            if(t>=100 && t<=1e5)
            lo+=t;
            }
    else cout<<lo<<'\n';
    //getchar();
    }
    //getchar();
}
