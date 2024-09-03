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

int n;

vector<int> lucky_numbers;

void solve(int x)
{
    if (x > n)
        return;

    lucky_numbers.push_back(x);

    solve(x * 10 + 4);
    solve(x * 10 + 7);
}

void solve()
{

    cin >> n;

    solve(0);

    sort(lucky_numbers.begin(), lucky_numbers.end());

    for (int i = 0; i < lucky_numbers.size(); i++) {
        if(lucky_numbers[i] == n) {
            cout << i << endl;
            return;
        }
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
