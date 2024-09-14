#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        deque<int> d(n);
        for (int i = 0; i < n; i++)
            cin >> d[i];
        vector<int> ans(n);
        for (int i = n - 1; i >= 0; i--) {
            while (d.back() != i + 1) {
                d.push_back(d.front());
                d.pop_front();
                ans[i]++;
            }
            d.pop_back();
        }
        for (auto i: ans)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}