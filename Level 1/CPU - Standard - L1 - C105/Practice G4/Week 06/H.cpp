#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    sort(arr, arr + 4);
    int res = 0;
    for (int i = 0; i < 3; i++)
        res += (arr[i] == arr[i + 1]);
    cout << res << '\n';
    return 0;
}