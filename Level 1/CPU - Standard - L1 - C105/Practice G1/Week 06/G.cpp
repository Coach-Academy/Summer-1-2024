#include <bits/stdc++.h>

using namespace std;
const int N = 55;
int arr[N];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    sort(arr, arr + m);
    int ans = 1000;
    for (int i = 0; i <= m - n; i++)
        ans = min(ans, arr[n + i - 1] - arr[i]);
    cout << ans << '\n';
    return 0;
}