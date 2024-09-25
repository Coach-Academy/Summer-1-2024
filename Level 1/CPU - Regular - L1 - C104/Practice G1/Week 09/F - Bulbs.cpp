#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS(){
    int n, m;
    cin>>n>>m;
    set<int>turned_on;
    while(n--){
        int t;
        cin>>t;
        while(t--){
            int b;
            cin>>b;
            turned_on.insert(b);
        }
    }
    cout<<(turned_on.size()==m?"YES\n":"NO\n");
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    FIO
    int test = 1;
//    cin >> test;
    while (test--) SS();
    return 0;
}
