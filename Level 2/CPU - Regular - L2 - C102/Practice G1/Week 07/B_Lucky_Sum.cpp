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

vector<int> lucky_numbers;

void rec(int x)
{
    if (x > 1e12)
        return;

    lucky_numbers.push_back(x);

    rec(x * 10 + 4);
    rec(x * 10 + 7);
}

void solve()
{
    int l, r;
    cin >> l >> r;

    rec(0);

    sort(lucky_numbers.begin(), lucky_numbers.end());

    int sum = 0;

    int last = l;

    bool flag = 1;

    for (int i = 1; i < lucky_numbers.size(); i++)
    {
        if (lucky_numbers[i] < last)
            continue;
        
        sum += (min(r, lucky_numbers[i]) - last + flag) * lucky_numbers[i];
        
        last = lucky_numbers[i];

        if(last > r)
            break;

        flag = 0;
    }

    cout << sum << endl;
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
