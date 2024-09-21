#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if ((!st.empty() and st.top() == '(' and s[i] == ')') or
                (!st.empty() and st.top() == '{' and s[i] == '}') or
                (!st.empty() and st.top() == '[' and s[i] == ']'))
                st.pop();
            else st.push(s[i]);
        }
        cout << (st.empty() ? "YES" : "NO") << endl;
    }

    return 0;
}