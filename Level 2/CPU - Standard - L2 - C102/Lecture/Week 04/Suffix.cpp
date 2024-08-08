#include <bits/stdc++.h>
using namespace std;
int main()
{

   int n;
   cin >> n;
   vector<int>suffix(n,0) , v(n);
   for (int i= 0;i<n;i++){
          cin >> v[i];
   }
   suffix[n-1] = v[n-1];
   for (int i= n-2 ; i>=0;i--){
    suffix[i] = suffix[i+1] + v[i];
   }

   int q;
   cin >> q;
   while (q--){
    int x;
    cin >> x;
    cout << suffix[x] << "\n";
   }

    return 0;
}
