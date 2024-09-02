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

int target;

vector<int> arr;

set<vector<int>, greater<vector<int>>> st;

void output(vector<int> &takenTillNow)
{
    cout << takenTillNow[0];

    for (int i = 1; i < takenTillNow.size(); i++)
    {
        cout << "+" << takenTillNow[i];
    }

    cout << endl;

    return;
}

void solve(int index, vector<int> takenTillNow)
{

    int sum = 0;
    for (auto e : takenTillNow)
        sum += e;

    if (sum > target)
        return;

    if (index == arr.size())
    {
        if (sum < target)
            return;

        sort(takenTillNow.rbegin(), takenTillNow.rend());

        st.insert(takenTillNow);

        return;
    }

    // take

    takenTillNow.push_back(arr[index]);
    solve(index + 1, takenTillNow);

    takenTillNow.pop_back();

    // leave
    solve(index + 1, takenTillNow);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while (cin >> target)
    {
        int n;
        cin >> n;

        if (target == 0 && n == 0)
        {
            return 0;
        }

        arr = vector<int>(n);

        for (auto &ele : arr)
            cin >> ele;

        cout << "Sums of " << target << ":\n";

        solve(0, {});

        if (st.empty())
        {
            cout << "NONE\n";
        }

        for (auto e : st)
        {
            output(e);
        }

        st.clear();
    }
}
