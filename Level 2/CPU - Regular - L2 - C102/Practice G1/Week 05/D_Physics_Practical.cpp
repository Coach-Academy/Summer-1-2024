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

    vi a(n);
    rep(i, n) cin >> a[i];

    sort(all(a));

    int answer = n;

    int p2 = 0;

    for (int i = 0; i < n; i++)
    {
        while (p2 < n && a[p2] <= 2 * a[i])
        {
            p2++;
        }

        if (p2 >= n)
            p2--;

        if (a[p2] > a[i] * 2)
            p2--;

        answer = min(answer, n - (p2 - i) - 1);
    }

    cout << n - answer << endl;
}

signed main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

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
