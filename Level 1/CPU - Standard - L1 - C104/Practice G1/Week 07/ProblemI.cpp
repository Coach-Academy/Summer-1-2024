#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1);
#define ll long long
int main()
{

   int t;
   cin >> t;
   while (t--){
    int n , d;
    cin >> n >> d;
    int arr[n];
    for (int i=0;i<n;i++)
        cin >> arr[i];
    sort (arr , arr + n);
      if (arr[0] + arr[1] <= d || arr[n-1] <= d )
           cout << "YES\n";
      else
        cout << "NO\n";
   }

}
