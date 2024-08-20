#include <bits/stdc++.h>
#define ll long long

using namespace std ; 

int main(){
    int n , x ; 
    cin >> n >> x ; 
    vector<ll> v(n) ; 
    for(auto &i : v) cin >> i ; 
    int l = 0 , r = 0 ,sum = 0 , ans = 1e9 ; 
    
    while(r<n){
        sum += v[r++] ; 
        while(sum>=x){
            ans = min(ans , r-l) ; 
            sum -= v[l++] ; 
        }
    }

    cout << (ans==1e9 ? -1 : ans) ; 
    return 0 ; 
}