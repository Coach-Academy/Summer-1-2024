#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int solve(int i, vector<int>&a, vector<int>&p ,vector<int>&x){
    if(i == a.size())
        return INT_MAX;
    int res = INT_MAX;
    if(x[i] > a[i])
        res = min(res,p[i]);
    return res = min (res, solve(i+1,a,p,x));
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n),p(n),x(n);
    for(int i = 0; i<n;i++)
        cin >> a[i] >> p[i] >> x[i];
    int ans = solve(0,a,p,x);
    cout << (ans == INT_MAX ? -1 : ans) << endl;
   return 0;
}