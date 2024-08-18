#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int arr[5][5] = {};
   for (int i=1;i<=3;i++){
      for (int j=1;j<=3;j++){
        cin >> arr[i][j];
      }
   }

   for (int i=1;i<=3;i++){
    for (int j=1;j<=3;j++){
        int sum = arr[i][j];
        sum+= arr[i-1][j]; // up
        sum+=arr[i+1][j] ; // down
        sum+=arr[i][j+1] ; // right
        sum+=arr[i][j-1] ; // left
        if (sum % 2 == 0)
            cout << 1;
        else cout << 0;
    }
    cout << "\n";
   }

    return 0;
}
