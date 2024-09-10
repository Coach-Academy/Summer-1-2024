#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void TT(){
    int n, d;
    cin>>n>>d;
    vector<int>v(n), ans(n);
    for(int &i:v) cin>>i;
    for(int i=0;i<n;i++){
        int new_i = ((i-d)%n+n)%n;
        ans[new_i]= v[i];
    }
    for(auto x:ans) cout<<x<<' ';
    cout<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t=1;
//    cin>>t;
    while(t--) TT();
    return 0;
}
