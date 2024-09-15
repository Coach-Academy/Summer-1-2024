#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum(ll x){
    return x*(x+1);
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans=sum(n/2);
        if(n%2) ans+=(n+1)/2;
        cout<<ans<<'\n';
    }
    return 0;
}