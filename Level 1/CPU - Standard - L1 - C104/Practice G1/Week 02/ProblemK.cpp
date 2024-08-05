#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long n , k;
   cin >> n >> k;

   long long mid = (n+1) / 2;
   if (k > mid){ // even number
    k-=mid; // ignore all odd numbers
    cout << 2 * k ; // get Kth even number
   }

   else { // odd numder
    cout << (2 * k) - 1; // get Kth odd number
   }
    return 0;
}
