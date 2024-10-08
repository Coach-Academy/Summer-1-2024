#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
void solve(int i ,vector<int>& v,int x){
    if(i == v.size())
        return;
    if(v[i] != x)
        cout << v[i] << " ";
    solve(i + 1 ,v ,x);
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n,x;
    cin >> n >> x;
    vector<int> v(n);
    for(auto &i : v) cin >> i;
    solve(0,v,x);
    return 0;
}