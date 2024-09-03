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

int m;

int recurs(int n, int steps = 0)
{
    if (n > m)
        return 1e9;

    if (n == m)
        return steps;

    return min(recurs(n * 2, steps + 1), recurs(n * 3, steps + 1));
}

void solve()
{
    int n;
    cin >> n >> m;

    int answer = recurs(n);

    if(answer == 1e9)
        cout << "-1" << endl;
    else
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
