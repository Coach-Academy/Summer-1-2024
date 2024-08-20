#include <bits/stdc++.h>
#define ll long long

using namespace std ; 

int main(){
    int n , d ; 
    cin >> n >> d ; 
    vector<ll> v(n) ; 
    for(auto &i : v) cin >> i ; 

    ll l = 0 , r = 0 ;
    ll ans = 0 ;  
    while(l<n){
        if(r<n && v[r] - v[l] <=d) r++ ; 
        else{
            if(r-l>=3) ans += (r-l-1)*(r-l-2) / 2 ; 
            l++ ; 
        }
    }
    cout << ans ; 
    return 0 ; 
}