#include <bits/stdc++.h>
#define ll long long

using namespace std ; 

int main(){
    int n ; cin >> n ; 
    vector<int> v(n) , score(2 , 0) ; 
    for(auto &i : v) cin >> i ; 

    int l=0 , r=n-1 ,  turn = 0 , d = 0 , s = 0 ; 
    while(l<=r){
        int value ; 
        if(v[r]>v[l]){
            value = v[r--] ; 
        }
        else{
            value = v[l++] ; 
        }

        score[turn%2] += value ; 
        turn ++ ; 
    }

    cout << score[0] << " " << score[1] ; 
    return 0 ; 
}