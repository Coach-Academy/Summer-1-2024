#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5;
int arr[N];

int main() {
    int n, m;
    cin >> n >> m;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        arr[i] = a - b;
        sum += a;
    }
    sort(arr, arr + n, greater<>());
    int i = 0;
    while (i < n and sum > m) {
        sum -= arr[i];
        i++;
    }

    cout << (sum > m ? -1 : i) << '\n';
    return 0;
}