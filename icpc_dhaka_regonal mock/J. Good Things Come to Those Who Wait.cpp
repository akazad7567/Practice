// C++ program to print all prime factors
#include <bits/stdc++.h>
typedef long long ll;
ll ar2[1000000];
using namespace std;

int main()
{

    ll t,n,cn=0,res=0,k,mi=1e15,ma=-1e15;
    cin>>t;
    while(t--){

            cin>>k;
    for(ll i=0;i<k;i++){
	cin>>n;
	//ar2[cn++]=n;
	if(n>ma) ma=n;
        if(n<mi) mi=n;
    }
    cout<<"Case "<<++cn<<": ";
    cout<<ma*mi<<endl;
   mi=1e15,ma=-1e15;
  // memset(ar2,0,sizeof ar2);

}

}

// This is code is contributed by rathbhupendra
