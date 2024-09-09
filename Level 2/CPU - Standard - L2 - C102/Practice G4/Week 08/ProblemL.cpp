#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1);
#define ll long long
int main()
{

   ll n;
   cin >> n;
   ll arr[n];
   ll x = 0;
   for (int i=0;i<n;i++){
    cin >> arr[i];
    x^=arr[i];
   }

   for (int i=0;i<n;i++){
       cout << (x ^ arr[i]) << " ";
   }

}
