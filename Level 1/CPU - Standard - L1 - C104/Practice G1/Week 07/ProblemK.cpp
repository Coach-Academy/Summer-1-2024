#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1);
#define ll long long
int main()
{

   int n , top ;
   cin >> n >> top;
   int bottom = 7 - top;
   bool ok = true;
   while (n--){
    int a , b;
    cin >> a >> b;
    if (a == top || a == bottom || b == top || b == bottom)
         ok = false;
   }

   if (ok)
    cout << "YES";
   else cout << "NO";
}
