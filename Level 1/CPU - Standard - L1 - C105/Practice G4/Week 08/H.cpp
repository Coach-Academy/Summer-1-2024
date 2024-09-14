#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> pos;
        for (int i = 0; i < n; i++)
            if (s[i] == 'A')
                pos.push_back(i + 1);
        pos.push_back(n + 1);
        int ans = 0;
        for (int i = 1; i < pos.size(); i++)
            ans = max(ans, pos[i] - pos[i - 1] - 1);
        cout << ans << '\n';
    }
    return 0;
}