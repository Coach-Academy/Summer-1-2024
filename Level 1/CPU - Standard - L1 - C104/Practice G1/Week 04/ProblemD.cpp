#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int t;
   cin >> t;
   while (t--){
    int n ;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++)
        cin >> arr[i];
    int mn = arr[n-1] , bad = 0;
    for (int i=n-1;i>=0 ; i--){
        if (arr[i] <= mn)
            mn = arr[i];
        else
            bad++;
    }
    cout << bad << "\n";
   }
    return 0;
}
