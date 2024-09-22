#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS() {
    set<int>vis;
    int n, m, ans=0, x;
    cin>>n>>m;
    while(n--){
        cin>>x;
        vis.insert(x);
    }
    while(m--){
        cin>>x;
        if(vis.find(x)!=vis.end()) ans++;
    }
    cout<<ans<<'\n';
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    FIO
    int test = 1;
    cin >> test;
    while (test--) SS();
    return 0;
}
