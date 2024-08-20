#include <bits/stdc++.h>
#define ll long long

using namespace std ; 

int main(){
    int n , t; cin >> n >> t; 
    vector<int> v(n) ;
    for(auto &i : v) cin >> i ; 

    int l = 0 , r = 0 , m = 0 , ans = 0; 
    
    while(r<n){
        m += v[r++] ; 
        while(m > t){
            m -= v[l++] ; 
        }
        ans = max(ans , r-l) ; 
    }

    cout << ans ; 
    return 0 ; 
}