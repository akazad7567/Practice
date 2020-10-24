#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 32
int main()
{
    const size_t NBITS = numeric_limits< unsigned int >::digits ;

    unsigned int n ;
  // cin >> n ;
    while(scanf("%u",&n)!=EOF)
    {
        if(n==0) return 0;
        //bitset<M>bset(n);

         const bitset<NBITS> bits(n) ;
       int cn=bits.count();
    const string str_bits = bits.to_string() ; // convert to a string of zeroes and ones

    // http://en.cppreference.com/w/cpp/string/basic_string/find
    const auto first_digit = str_bits.find('1') ; // locate the first '1'
    cout<<"The parity of ";
    if( first_digit !=string::npos ) // found it; print the substring starting at the first '1'
       cout << str_bits.substr(first_digit);
        // http://en.cppreference.com/w/cpp/string/basic_string/substr

        cout<<" is "<<cn<<" (mod 2).\n";

    }
}
