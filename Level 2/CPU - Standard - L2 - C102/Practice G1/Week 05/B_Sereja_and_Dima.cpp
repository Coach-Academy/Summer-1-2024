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

int to_take(deque<int> &a)
{
    if (a.front() > a.back())
    {
        int score = a.front();
        a.pop_front();
        return score;
    }
    else
    {
        int score = a.back();
        a.pop_back();
        return score;
    }
}

void solve()
{
    int n;
    cin >> n;

    deque<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int score_1 = 0, score_2 = 0;
    bool turn = 0;

    while (!a.empty())
    {

        turn ? score_2 += to_take(a) : score_1 += to_take(a);

        turn = !turn;
    }

    cout << score_1 << ' ' << score_2 << endl;
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
