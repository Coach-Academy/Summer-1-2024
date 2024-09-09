#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1);
#define ll long long
int main()
{

   int t;
   cin >> t;
   while (t--){
    ll x;
    cin >> x;
    ll ans = 0;
    for (int i=0 ; i < 64 ; i++){
        if ((1LL<<i) > x)
         break;
        if (((x >> i ) & 1) == 0)
            ans += (1LL << i);
    }
    cout << ans << "\n";
   }

}
