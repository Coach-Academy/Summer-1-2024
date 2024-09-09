#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1);
#define ll long long
int main()
{

   ll l , r;
   cin >> l >> r;
   ll x = (l ^ r);
   ll mx = 1;
   while (x){
    x >>=1 ;
    mx<<=1;
   }
   cout << mx - 1;

}
