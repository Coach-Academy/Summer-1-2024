#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1), pos(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pos[a[i]] = i;
        }
        int last = n + 1;
        for (int i = n; i >= 1; i--) {
            for (int j = pos[i]; j < last; j++)
                cout << a[j] << " ";
            last = min(last, pos[i]);
        }
        cout << '\n';
    }
    return 0;
}