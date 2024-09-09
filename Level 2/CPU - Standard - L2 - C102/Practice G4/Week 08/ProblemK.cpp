#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1);
#define ll long long
int main()
{

   ll t;
   cin >> t;
   while (t--){
    ll x;
    cin >> x;
    if (! (x & (x-1))){
        cout << "-1\n";
        continue;
    }
    for (int i=0;i<32;i++){
         if ((x >> i) & 1){
            cout << (1 << i) << ' ' << (x ^ (1 << i)) << "\n" ;
            break;
         }
    }
   }

}