#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n], a[n], b[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    arr[0] = a[0] + b[0];
    ans = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i] = (arr[i - 1] - a[i]) + b[i];
        ans = max(ans, arr[i]);
    }
    cout << ans << '\n';
    return 0;
}