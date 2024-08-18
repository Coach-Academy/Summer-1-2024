#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int t;
   cin >> t;
   while (t--){
    int n , k;
    cin >> n >> k;
    int a[n] , b[n];
    for (int i=0;i<n;i++)
        cin >> a[i];
    for (int i=0;i<n;i++)
        cin >> b[i];
    sort (a , a+n);
    sort(b , b+n);
    reverse (b , b+n);
// b now is sorted in decreasing order
   for (int i=0;i<n;i++){
       if (k > 0 && a[i] < b[i])
       {
           swap(a[i] , b[i]);
           k--;
       }
   }
    int sum = 0;
    for (int i=0;i<n;i++)
        sum+=a[i];
    cout << sum << "\n";
   }
    return 0;
}
