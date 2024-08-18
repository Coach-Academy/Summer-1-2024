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
    int n, D;
    cin >> n >> D;

    vector<int> o(n);

    for (int i = 0; i < n; i++)
        cin >> o[i];

    // i, j, k
    // i, k -> k - i - 1

    sort(all(o));

    int answer = 0;

    int p1 = 0, p2 = 0;

    while (p1 < n && p2 < n)
    {
        // cout << p1 << ' ' << p2 << endl;
        if (p2 <= p1 + 1)
        {
            p2 = p1 + 2;
            continue;
        }

        if (p2 < n - 1 && o[p2] - o[p1] <= D)
        {
            p2++;
        }

        if (o[p2] - o[p1] > D)
            p2--;

        int dist = p2 - p1 - 1;

        // cout << p1 << ' ' << p2 << ' ' << dist * (dist + 1) / 2 << endl;

        answer += dist * (dist + 1) / 2;

        p1++;
    }

    cout << answer << endl;
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
