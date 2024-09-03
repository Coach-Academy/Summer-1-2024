#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
ll mul(ll a, ll b){
    return (a%10 * b%10)%10;
}
void SS(){
    ll a, b;
    cin>>a>>b;
    ll diff = b-a;
    if(diff >= 5) return void(cout<<"0\n");
//    if(diff == 0) return void(cout<<"1\n");
    ll ans=(diff?(a+1)%10:1);
    for(ll i = a+2;i<=b;i++) ans = mul(ans, i);
    cout<<ans<<'\n';
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
