#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int n;
   cin >> n;
   int arr[n];
   for (int i=0;i<n-1;i++)
         cin >> arr[i];
   int a , b;
   cin >> a >> b;
   a-- , b--;
   int ans = 0;
   for (int i=a;i<b;i++)
    ans += arr[i];

   cout << ans ;
    return 0;
}
