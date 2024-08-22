#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int q;
    cin >> q;

    while (q--)
    {
        int t;
        cin >> t;

        int lo = 0, hi = n - 1;

        int ans = -1;

        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;

            if (a[mid] == t)
            {
                ans = mid;
                break;
            }
            else if (a[mid] < t)
            {
                lo = mid + 1;
            }
            else
                hi = mid - 1;
        }

        cout << ans << endl;
    }
}