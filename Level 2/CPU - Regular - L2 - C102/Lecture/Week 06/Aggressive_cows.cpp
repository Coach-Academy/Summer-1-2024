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
    int n, c;
    cin >> n >> c;

    vector<int> x(n);

    for (int i = 0; i < n; i++)
        cin >> x[i];

    sort(all(x));

    int lo = 0, hi = 1e9, answer = 0;

    while (lo <= hi)
    {
        int mid = (lo + hi) / 2; // d

        int cur_c = c;

        int id = 0;
        cur_c--;

        while (cur_c != 0)
        {

            int l = id + 1, r = n - 1;
            int closest_position = -1;

            while (l <= r)
            {
                int mid2 = (l + r) / 2;

                if (x[mid2] >= x[id] + mid)
                {
                    closest_position = mid2;
                    r = mid2 - 1;
                }
                else
                    l = mid2 + 1;
            }

            if (closest_position == -1)
            {
                break;
            }
            cur_c--;

            id = closest_position;
        }

        if(cur_c == 0) {
            answer = mid;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }

    cout << answer << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
