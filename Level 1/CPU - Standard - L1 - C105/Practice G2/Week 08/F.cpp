#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int idx = 0;
    for (int i = 0; i < n; i++)
        if (((a[i] + m - 1) / m) >= ((a[idx] + m - 1) / m))
            idx = i;
    cout << idx + 1 << '\n';
    return 0;
}