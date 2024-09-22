#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS() {
    map<int, int>freq;
    int n, m;
    cin>>n>>m;
    while(n--){
        int x;
        cin>>x;
        freq[x]++;
    }
    int ans=0;
    while(m--){
        int x;
        cin>>x;
        freq[x]++;
        if(freq[x]==2) ans++;
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
