#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5;
int arr[N];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int cnt = 1;
    for (int i = 1; i < n; i++)
        cnt += (arr[i] != arr[i - 1]);
    cout << cnt << '\n';
    return 0;
}