#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
        cin >> dq[i];
    while (d--) {
        dq.push_back(dq.front());
        dq.pop_front();
    }
    for (auto i: dq) cout << i << " ";
    cout << '\n';
    return 0;
}