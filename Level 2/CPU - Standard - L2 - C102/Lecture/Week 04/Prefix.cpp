#include <bits/stdc++.h>
using namespace std;
int main()
{

   int n;
   cin >> n;
   vector<int>prefix(n,0) , v(n);
   for (int i= 0;i<n;i++){
          cin >> v[i];
   }
   prefix[0] = v[0];
   for (int i= 1 ; i<n;i++){
    prefix[i] = prefix[i-1] + v[i];
   }

   int q;
   cin >> q;
   while (q--){
    int l , r;
    cin >> l >> r;
    if (l==0)
        cout << prefix[r] << "\n";
    else
    cout << prefix[r] - prefix[l-1] << "\n";
   }

    return 0;
}
