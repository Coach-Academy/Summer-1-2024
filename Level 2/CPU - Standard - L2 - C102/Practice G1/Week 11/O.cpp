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
ll const mod=1e9+7;
vector<ll> fact(1e6+3);
ll mul(ll a,ll b)
{
    return (a%mod)*(b%mod)%mod;

}
ll fastpowmod(ll a,ll b,ll m)
{
    if(b==0)
        return 1;
    ll x=fastpowmod(a,b/2,m);
    if(b%2)
        return mul(mul(x,x),a);
    return mul(x,x);
}
ll inv(ll a,ll m)
{
    return fastpowmod(a,m-2,m);
}
ll ncr(ll n,ll m)
{
    return mul(mul(fact[n],inv(fact[n-m],mod)),inv(fact[m],mod));
}
int main() {
     FAST
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    fact[0]=1;
    for(int i=1;i<=1e6;i++)
        fact[i]=mul(fact[i-1],i);
    int t;
    cin>>t;
    while (t--){
        
        int n,m;
        cin>>n>>m;
        vector<int>vec1(n);
        map<ll,ll>freq;
        for(int i=0;i<n;i++)
            cin>>vec1[i],freq[vec1[i]]++;
        std::sort(vec1.rbegin(), vec1.rend());
        ll ele=vec1[m-1];
        ll c=freq[ele];
        int cnt=0;
        for(int i=0;i<m;i++)
            if(vec1[i]==ele)
                cnt++;
        cout<<ncr(c,cnt)<<"\n";

    }

}