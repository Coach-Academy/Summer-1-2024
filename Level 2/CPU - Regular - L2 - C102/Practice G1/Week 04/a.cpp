#include <iostream>
#include <limits>
#include <string>
#include<vector>
#include <set>
#include<map>
#define ll long long
using namespace std;

void solve() {

    ll n;
    cin>>n;
    map<ll,ll> frq;
    ll mx  = -1;
    for (int i =0;i<n;i++) {
        ll a;
        cin>>a;
        frq[a]++;
        mx = max(mx , frq[a]);
    }
cout<<n - mx<<endl;
    
}

int main() {

     solve();
 

}