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
    int n;
    cin >> n;

    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        v[i] = x + sum;

        sum += x;
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        int answer = 0;

        int lo = 0, hi = n - 1;

        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;

            if (v[mid] >= x)
            {
                answer = mid;
                hi = mid - 1;
            }
            else
                lo = mid + 1;
        }

        cout << answer + 1 << endl;
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
