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

int calc(int l, int r)
{
    int diff = r - l - 1; // excluding boundaries

    return diff * (diff + 1) / 2;
}

void solve()
{

    int n, D;
    cin >> n >> D;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(all(a));

    int answer = 0;

    int p2 = 0;

    for (int i = 0; i < n; i++)
    {

        while (p2 < n && a[p2] - a[i] <= D)
        {
            p2++;
        }

        if (p2 >= n)
            p2--;

        if (a[p2] - a[i] > D)
            p2--;

        if (p2 > i + 1)
            answer += calc(i, p2);
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
