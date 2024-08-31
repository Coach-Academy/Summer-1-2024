#include <bits/stdc++.h>

using namespace std;
const int N = 105;
int arr[N];

int main() {
    int n, k, x;
    cin >> n >> k >> x;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] > x and k) {
            arr[i] = x;
            k--;
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    cout << sum << '\n';
    return 0;
}