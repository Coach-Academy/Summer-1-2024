#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int solve(int i,vector<int> &a,vector<int> &b){
    if(i == a.size())
        return 0;
    return a[i] * b[i] + solve(i+1,a,b);
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for(auto &i :a) cin >> i;
    for(auto &i :b) cin >> i;

    cout << ((solve(0,a,b) == 0) ? "Yes" : "No") << endl;
    return 0;
}