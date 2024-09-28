#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n, s;
    cin >> n >> s;
    map<int, int, greater<>> buy;
    map<int, int> sell;
    while (n--) {
        char d;
        int p, q;
        cin >> d >> p >> q;
        if (d == 'S')
            sell[p] += q;
        else
            buy[p] += q;
    }
    int cnt = 0;
    stack<pair<int, int>> st;
    for (auto it: sell) {
        if (cnt == s)
            break;
        st.push(it);
        cnt++;
    }
    while (!st.empty()) {
        cout << "S " << st.top().first << " " << st.top().second << endl;
        st.pop();
    }
    cnt = 0;
    for (auto [p, q]: buy) {
        if (cnt == s)
            break;
        cout << "B " << p << " " << q << endl;
        cnt++;
    }
    return 0;
}