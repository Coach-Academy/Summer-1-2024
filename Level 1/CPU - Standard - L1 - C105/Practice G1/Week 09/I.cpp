#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int qq;
    cin >> qq;
    priority_queue<int, vector<int>, greater<int>> pq;
    queue<int> q;
    while (qq--) {
        int op;
        cin >> op;
        switch (op) {
            case 1: {
                int x;
                cin >> x;
                q.push(x);
                break;
            }
            case 2 : {
                if (!pq.empty()) {
                    cout << pq.top() << endl;
                    pq.pop();
                } else {
                    cout << q.front() << endl;
                    q.pop();
                }
                break;
            }
            default : {
                while (!q.empty()) {
                    pq.push(q.front());
                    q.pop();
                }
            }
        }
    }
    return 0;
}