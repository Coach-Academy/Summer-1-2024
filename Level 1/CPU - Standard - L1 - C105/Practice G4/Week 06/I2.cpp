#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int arr[n], a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    arr[0] = b[0];
    int ans = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i] = (arr[i] - a[i]) + b[i];
        ans = max(ans, arr[i]);
    }
    cout << ans << '\n';
    return 0;
}