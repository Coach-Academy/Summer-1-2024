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

int n, m, q;

vector<int> a, b, c, d;

int max_score = 0;

int score(vector<int> seq) {
    int temp = 0;

    for (int i = 0; i < a.size(); i++) {
        if(seq[b[i] - 1] - seq[a[i] - 1] == c[i])
            temp += d[i];
    }

    return temp;
}

void solve(vector<int> seq) {
    if(seq.size() == n) {

        if(score(seq) > max_score) {
            // for(auto ele : seq)
            //     cout << ele << ' ';
            // cout << endl;
        }

        max_score = max(max_score, score(seq));
        return;
    }

    for (int i = 1; i <= m; i++) {
        if(seq.empty() || i >= seq.back()) {
            seq.push_back(i);
            solve(seq);
            seq.pop_back();
        }
    }
}

void solve()
{

    cin >> n >> m >> q;

    for (int i = 0; i < q; i++) {
        int x1, x2, x3, x4;
        cin >> x1 >> x2 >> x3 >> x4;

        a.push_back(x1);
        b.push_back(x2);
        c.push_back(x3);
        d.push_back(x4);
    }

    solve({});

    cout << max_score << endl;
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
