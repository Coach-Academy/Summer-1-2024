
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cctype>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <sstream>
#include <iterator>
#include <map>
#include <unordered_set>
#include <bitset>
#include <utility>
#include <iomanip>
#include <bits/stdc++.h>
#define ll long long

#define FAST                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
long long const inf=1e18;
ll const mod=LLONG_MAX;
vector<ll> fact(1e6+3);
ll mul(ll a,ll b)
{
    return (a%mod)*(b%mod)%mod;

}

ll ncr(ll n,ll m)
{
    return ((fact[n])/(fact[n-m])*fact[m]);
}
int main() {
     FAST
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif


    int t;
    cin>>t;
    while (t--){

        ll n,k;
        cin>>n>>k;
        ll ans=1;
        n--,k--;
        if(n-k<k)
            k=n-k;
        for(ll i=0;i<k;i++)
            ans=ans*(n-i)/(i+1);
        cout<<ans<<"\n";

    }

}