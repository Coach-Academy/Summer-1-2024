#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v[3];
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        v[t - 1].push_back(i);
    }
    cout << min({v[0].size(), v[1].size(), v[2].size()}) << '\n';
    while (!v[0].empty() && !v[1].empty() && !v[2].empty()) {
        cout << v[0].back() << " " << v[1].back() << " " << v[2].back() << '\n';
        v[0].pop_back();
        v[1].pop_back();
        v[2].pop_back();
    }

    return 0;
}