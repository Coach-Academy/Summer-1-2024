#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1);
#define ll long long
bool isValid (vector<int>&path){
  for (int i=1;i<path.size();i++){
      if (path[i] <= path[i-1])
         return false;
  }
  return true;
}
int main()
{

   string s;
   cin >> s;
   int n = s.size();
   ll ans = 0;
   for (int i=0;i<(1<<n-1);i++){
       ll sum = 0 ;
       for (int j=0;j<n;j++){
        sum = sum * 10 + (s[j]-'0');
        if ((i >> j) & 1){
            ans+=sum;
            sum = 0;
        }
       }
       ans += sum;
   }

   cout << ans;
}
