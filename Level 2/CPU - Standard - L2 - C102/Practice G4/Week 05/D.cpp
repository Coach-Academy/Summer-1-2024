#include <bits/stdc++.h>
#define ll long long

using namespace std ; 

int main(){
    freopen("input.txt" , "r" , stdin) ; 
    freopen("output.txt" , "w" , stdout) ; 
    int n ; 
    cin >> n ; 
    vector<ll> v(n) ; 
    for(auto &i : v) cin >> i ; 
    sort(v.begin() , v.end()) ; 
    int l = 0 , r = 0 , mxLen = -1; 
    while(r<n){
        while(r<n && v[r] <= v[l]*2){
            r++ ; 
        }
        mxLen = max(mxLen , r-l) ; 
        l++ ; 
    }
    cout << n - mxLen ; 
    return 0 ; 
}