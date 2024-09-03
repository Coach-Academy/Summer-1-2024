#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    int t;
    cin >> t;

    int lo = 0, hi = 5e9;

    int ans = 0;

    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;

        if (mid * mid <= t)
        {
            ans = mid;

            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }

    cout << ans << endl;
}