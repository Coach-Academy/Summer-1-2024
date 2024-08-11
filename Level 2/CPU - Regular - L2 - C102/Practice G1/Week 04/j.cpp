#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
#define int long long
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n,m,k;
  cin>>n>>m>>k;
  int arr[N] = {0};
  for(int i  = 1; i <= n; i++) cin>>arr[i];
  
  vector<pair<long long,pair<long long , long long>>> vec(m+1);
  for(int i = 1; i <= m; i++){
    cin>>vec[i].first>>vec[i].second.first>>vec[i].second.second;
  }
  
  long long help[N] = {0};
  for(int i = 1; i <= k; i++){
    int l,r;
    cin>>l>>r;
    help[l]++;
    help[r+1]--;
  }
  for(int i = 1; i <= m; i++)  help[i] += help[i-1];
  for(int i = 1; i <= m; i++)  vec[i].second.second *=1LL *  help[i];
  
  long long ans[N] = {};
  for(int i = 1; i <= m; i++){
    int l = vec[i].first;
    int r = vec[i].second.first;
    int v = vec[i].second.second;
    ans[l] += v;
    ans[r+1] -= v;
  }

  for(int i = 1; i <= n; i++) ans[i] += ans[i-1];
  
  for(int i = 1; i <= n; i++) cout<<arr[i] + ans[i]<<' ';

  
  return 0;
} 