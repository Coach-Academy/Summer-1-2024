#include <bits/stdc++.h>
#define ll long long

using namespace std ; 

int main(){
    int n ; cin >> n ; 
    vector<ll> v(n) ; 
    for(auto &i : v){
        cin >> i ; 
    }

    sort(v.begin() , v.end()) ; 

    ll l=0 , r=(n/2)-1 , carry = 0; 
    while(l<n/2 && r<n){
        if(v[l]*2<=v[r]){
            carry ++ ; 
            l++ ;
        }
        r++ ; 
    }
    cout << n - carry;
    return 0 ; 
}