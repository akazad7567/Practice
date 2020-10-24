#include<bits/stdc++.h>
#include <functional>
using namespace std;

struct ftball
{
    string name;
    int attack,defends;
};
//bool comcheck3(ftball a,ftball b)
//{
//   return(a.attack>b.attack);
//
//}
bool comcheck(ftball a,ftball b)
{
   if(a.attack>b.attack) return 1;
    else if(a.attack<b.attack) return 0;
    else
        {
            if(a.defends<b.defends) return 1;
            else if(a.defends>b.defends) return 0;
            else return a.name<b.name;
        }



}
bool comcheck2(ftball a,ftball b)
{
    return a.name<b.name;

}

void check(ftball arr[],int n,int j)
{
 // sort(arr,arr+10);
    sort(arr,arr+10,comcheck);


    sort(arr,arr+5,comcheck2);
     cout<<"Case "<<j+1<<":"<<'\n'<<"(";
    for(int i=0;i<5;i++)
    {
        //cout<<arr[i].name<<ends<<arr[i].attack<ends<<arr[i].defends;
        //cout<<'\t'<<endl;
        //cout<<arr[i].name<<ends<<arr[i].attack<<ends<<arr[i].defends<<endl;

        if(i<4) cout<<arr[i].name<<", ";
        else cout<<arr[i].name;
    }
    sort(arr+5,arr+10,comcheck2);
    cout<<')'<<'\n'<<'(';
    for(int i=5;i<10;i++)
    {
        if(i<9)
        cout<<arr[i].name<<", ";
        else cout<<arr[i].name;
    }
    cout<<')'<<'\n';



}

int main()
{

    int n=10,t;
    cin>>t;
    for(int j=0;j<t;j++){
    ftball arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i].name>>arr[i].attack>>arr[i].defends;
    }
    check(arr,n,j);


    }
}
