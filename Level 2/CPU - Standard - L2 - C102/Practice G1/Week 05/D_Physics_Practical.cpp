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
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int answer = n;

    sort(all(a));

    // for (int i = 0; i < n; i++)
    //     cout << a[i] << ' ';
    // cout << endl;

    int p2 = 0;

    for (int i = 0; i < n; i++)
    {
        int mn = a[i];
        int mx = a[i];

        while (p2 < n && a[p2] <= mn * 2)
        {
            p2++;
        }

        if (p2 >= n)
            p2--;

        if (a[p2] > mn * 2)
            p2--;

        int semi_ans = 0;

        // cout << i << ' ' << p2 << ' ' << n - (p2 - i)<< endl;

        semi_ans += n - (p2 - i) - 1;

        answer = min(answer, semi_ans);
    }

    cout << answer << endl;
}

signed main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

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
