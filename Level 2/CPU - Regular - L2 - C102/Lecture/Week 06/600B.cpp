#include <bits/stdc++.h>
using namespace std;

#define int long long

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define mp make_pair
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(all(a));

    for (int i = 0; i < m; i++)
    {
        int lo = 0, hi = a.size() - 1;

        int answer = -1;

        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;

            if (a[mid] <= b[i])
            {
                answer = mid;
                lo = mid + 1;
            }
            else
                hi = mid - 1;
        }

        cout << answer + 1 << ' ';
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
