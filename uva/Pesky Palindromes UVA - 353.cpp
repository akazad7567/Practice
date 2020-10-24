#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("ou.txt","w",stdout);
    string s1,s2;
    string s4="",s5;

    int n;
    //cin>>n;
    //scanf("%*c");
    while(getline(cin,s1))
    {
        int cn=0;
        int c1=0,c2=0;
        //scanf("%*c");
        //fflush(stdin);

        int si=s1.size();
        int i,j;
        for(i=0,j=1; i<s1.size(); i++,j++)
        {
            string s3[2000]={""};
            int kk=0;
            for(int k=0; k<si; k++)
            {

                s2=s1.substr(k,j);
                s5=s2;
                reverse(s2.begin(),s2.end());
                if(s2==s5)
               {
                    s3[kk]=s2;
                    //cout<<s3[kk]<<ends;
                 s4+=s2;
                 kk++;
            }
           // cout<<s5<<ends;
            }
            c1+=kk;
            int count = 0;
            //cout<<endl<<kk<<ends;
            for(int l=0; l<kk; l++)
            {

       for(int ll=l+1;ll<kk;ll++)
       {
           if(s3[l]==s3[ll]&&!s3[l].empty()) {
                count++;
               // cout<<count<<ends;
                s3[ll]="";
           }
       }
            }
//            cout<<endl;
//            cout<<count<<endl;
//            cn=kk-count;
           c2+=count;
            si--;

  //cout<<endl;
        }
        cout<<"The string "<<"'"<<s1<<"'"<<" contains "<<c1-c2<<" palindromes.\n";

        //cout<<c1-c2<<'\n';
        //cout<<cn<<'\n';


    }
}

