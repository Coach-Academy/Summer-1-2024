#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
int n;

int solve(int i, vector<int> &a, vector<int> &x, vector<int> &p) {
    if (i == n)
        return INT_MAX;
    int ret = INT_MAX;
    if (x[i] > a[i])
        ret = min(ret, p[i]);
    return ret = min(ret, solve(i + 1, a, x, p));
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    cin >> n;
    vector<int> a(n), p(n), x(n);
    for (int i = 0; i < n; i++)
        cin >> a[i] >> p[i] >> x[i];
    int ans = solve(0, a, x, p);
    cout << (ans == INT_MAX ? -1 : ans) << endl;
    return 0;
}