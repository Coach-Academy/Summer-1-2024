#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int n;
   cin >> n;
   int arr[n];
   for (int i=0;i<n;i++)
    cin >> arr[i];
   int minIdx = 0 , maxIdx = 0 , mx = 0 , mn = 200;
   for (int i=0;i<n;i++){
      if (arr[i] > mx){
        mx = arr[i];
        maxIdx = i;
      }
      if (arr[i] <= mn){
        mn = arr[i];
        minIdx = i;
      }
   }
   int ans = maxIdx + (n - 1 - minIdx);
   if (maxIdx > minIdx)
    ans--;

   cout << ans ;
    return 0;
}
