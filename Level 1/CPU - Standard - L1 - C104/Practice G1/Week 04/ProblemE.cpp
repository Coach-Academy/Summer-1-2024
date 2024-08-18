#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int n ;
   cin >> n;
   int arr[n];
   for (int i=0;i<n;i++){
    cin >> arr[i];
   }
   int groups = 1;
   for (int i=0;i<n-1;i++){
       if (arr[i]!=arr[i+1])
             groups++;
   }
   cout << groups ;
    return 0;
}
