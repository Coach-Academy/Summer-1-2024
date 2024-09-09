#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1);
#define ll long long
int main()
{

   ll x;
   cin >> x;
   int cntOnes = 0 , cntZero = 0;
   while (x){
        if ((x & 1) == 0)
            cntZero++;
        x>>=1;
   }

   cout << (1LL << cntZero );

}
