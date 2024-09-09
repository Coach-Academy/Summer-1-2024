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

   int n;
   cin >> n;
   int arr[n];
   for (int i=0;i<n;i++){
    cin >> arr[i];
   }
  int mx = 0;
   for (int i=0;i<(1<<n);i++){
        vector<int>path;
    for (int j=0;j<n;j++){
           if ((i >> j) & 1){
              path.push_back(arr[j]);
           }
    }
      if (isValid(path)){
        mx = max (mx , (int)path.size());
      }
   }
   cout << mx;
}
