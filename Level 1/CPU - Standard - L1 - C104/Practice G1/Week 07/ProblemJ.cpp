#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1);
#define ll long long
int main()
{

   int n;
   cin >> n;
   ll arr[n];
   ll sum = 0;
   for (int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
   }
   ll x;
   cin >> x;
   ll copies = x / sum;
   ll cnt = copies * n ;
   ll total = copies * sum ;
   // 3 5 2
   for (int i=0 ; i < n  && total <= x; i++){
       total+=arr[i];
       cnt++;
   }

   cout << cnt;

}
