#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
void solve(int i, vector<int> &a,int x){
    if(i == a.size())
        return;
    if(a[i] != x)
        cout << a[i] << " ";
    solve(i+1, a, x);
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    solve(0,a,x);
    return 0;
}