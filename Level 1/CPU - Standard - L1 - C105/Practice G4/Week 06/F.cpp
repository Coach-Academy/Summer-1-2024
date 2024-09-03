#include <bits/stdc++.h>

using namespace std;
const int N = 1005;
int arr[N];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int mx = arr[0], mn = arr[0], amazing = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > mx)
            amazing++;
        if (arr[i] < mn)
            amazing++;
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }
    cout << amazing << '\n';
    return 0;
}