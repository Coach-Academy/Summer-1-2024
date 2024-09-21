#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >> n >>m;
    int ans ,cur=0;
    vector<int> a(n);
    for(auto &i: a) cin >> i;
    int idx= 0;
    for(int i =0; i<n;i++){
        if(((a[i] +m -1) / m) >= ((a[idx] + m-1) / m))
            idx = i;
    }
    cout << idx +1 << '\n';
    return 0;
}