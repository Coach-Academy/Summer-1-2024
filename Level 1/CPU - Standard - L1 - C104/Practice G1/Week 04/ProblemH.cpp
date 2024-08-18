#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int n;
   cin >> n;
   int arr[n+2];
   for (int i=1;i<=n;i++)
         cin >> arr[i];
   int m;
   cin >> m;
   while (m--){
    int x , y;
    cin >> x >> y;
      arr[x-1]+=y-1;
      arr[x+1]+= arr[x] - y;
      arr[x] = 0;
   }

   for (int i=1;i<=n;i++)
       cout << arr[i] << "\n";

    return 0;
}
