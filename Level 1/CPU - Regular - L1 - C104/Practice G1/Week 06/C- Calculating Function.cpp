#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS(){
    ll n;
    cin>>n;
    if(n&1){            // n%2==1
        n++;
        cout<<-n/2<<'\n';
    }
    else cout<<n/2<<'\n';
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
