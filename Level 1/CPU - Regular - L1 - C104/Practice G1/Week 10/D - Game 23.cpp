#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
int solve(int n, int m){
    if(n==m) return 0;
    if(n>m) return 1e9;
    return min(solve(2*n, m), solve(3*n, m))+1;
}
void TT(){
    int n, m;
    cin>>n>>m;
    int ans = solve(n, m);
    if(ans>=1e9) cout<<"-1\n";
    else cout<<ans<<'\n';
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST
    int testCases = 1;
//    cin >> testCases;
    while (testCases--) TT();
    return 0;
}