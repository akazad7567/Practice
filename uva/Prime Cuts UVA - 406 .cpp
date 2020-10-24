// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;
int cnt=0;
bool prime[1000000]= {0};
int prime2[1000000]= {0};
int maxi=-1e9;
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.

    memset(prime, true, sizeof(prime));
    memset(prime2, 0, sizeof(prime2));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p greater than or
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked.
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    prime[1]=true;

    // Print all prime numbers
    cnt=1;
    for (int p=1; p<=n; p++)
    {
        if (prime[p])

        {
            prime2[cnt]=p;
            //cout<<p<<ends;
            cnt++;
            if(p>maxi)
                maxi=p;
        }
    }
    cnt--;
//cout<<endl;
}


int main()
{
   // freopen("out.txt","w",stdout);
    int n,c,c2;
    while(scanf("%d %d",&n,&c)!=EOF)
    {
        c2=c;
        cnt=0,maxi=-1e9;
        int c3=c;
        SieveOfEratosthenes(n);
        if(cnt%2)
            c=2*c-1;
        else
            c=2*c;
       if(c>cnt) c=cnt;


       cout<<n<<' '<<c2<<": ";
         int i,j;
       for(i=(cnt/2)-(c/2)+1,j=1;j<c;j++,i++)
       {
           cout<<prime2[i]<<' ';



       }
       cout<<prime2[i]<<"\n\n";


    }
    return 0;
}
