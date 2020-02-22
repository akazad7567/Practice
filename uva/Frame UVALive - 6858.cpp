 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {

     int x,y;
     while(cin>>x>>y&&x+y){
     int n;
     cin>>n;
     int m;
     while(n--)
     {
         cin>>m;
         if((x%m==0&&(y-2)%m==0)||((x-2)%m==0&&y%m==0)||((x-1)%m==0&&(y-1)%m==0)||m==2) cout<<"YES"<<"\n";

     }
 }
 }
