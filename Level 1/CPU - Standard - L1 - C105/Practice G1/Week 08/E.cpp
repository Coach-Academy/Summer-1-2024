#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1)
            v.push_back(i + 1);
    }
    cout << v.size() << '\n';
    v.push_back(n + 1);
    for (int i = 1; i < v.size(); i++)
        cout << v[i] - v[i - 1] << " ";
    cout << '\n';
    return 0;
}