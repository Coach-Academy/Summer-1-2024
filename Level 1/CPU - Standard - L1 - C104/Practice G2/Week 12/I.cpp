#include <bits/stdc++.h>
using namespace std;

int N = 1e5 + 5;
int n, x;
vector<int> v(N), ans;
void solve(int i){
    if(i==n) return;
    if(v[i]!=x) ans.push_back(v[i]);
    return solve(i+1);
}
int main()
{
    cin>>n>>x;
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }
    solve(0);
    for(auto& it : ans) cout<<it<<' ';
    return 0;
}
