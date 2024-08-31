#include <bits/stdc++.h>

using namespace std;
const int N = 105;
int arr[N];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int mxPos = max_element(arr, arr + n) - arr;
    reverse(arr, arr + n);
    int temp = min_element(arr, arr + n) - arr;
    int mnPos = n - temp - 1;
    int ans = mxPos + (n - mnPos - 1);

    cout << (mxPos > mnPos ? ans - 1 : ans) << '\n';
    return 0;
}