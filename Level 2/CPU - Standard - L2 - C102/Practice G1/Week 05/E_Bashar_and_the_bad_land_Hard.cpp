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
    int n, x;
    cin >> n >> x;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int p2 = 0;
    int sum = 0;
    int answer = 1e9;

    for (int i = 0; i < n; i++)
    {

        while (sum < x && p2 < n)
        {
            sum += a[p2];
            p2++;
        }

        if (sum >= x)
        {
            answer = min(answer, p2 - i);
        }

        sum -= a[i];
    }

    if (answer != 1e9)
        cout << answer << endl;
    else
        cout << "-1\n";
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
