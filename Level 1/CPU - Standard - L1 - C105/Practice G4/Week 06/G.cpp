#include <bits/stdc++.h>

using namespace std;
const int N = 55;


int main() {
    int arr[N];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    int ans = 1000;
    sort(arr, arr + m);

    for (int i = 0; i <= m - n; i++) {
        int big = arr[n + i - 1];
        int small = arr[i];
        ans = min(ans, big - small);
    }
    cout << ans << endl;
    return 0;
}