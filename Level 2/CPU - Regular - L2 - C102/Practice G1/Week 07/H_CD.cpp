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

int maxAnswer = 0;

void setMax(int id, int sum)
{
    if (sum > target)
        return;

    if (id == arr.size())
    {
        maxAnswer = max(maxAnswer, sum);
        return;
    }

    setMax(id + 1, sum + arr[id]);
    setMax(id + 1, sum);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while (cin >> target)
    {
        int n;
        cin >> n;

        arr = vector<int>(n);

        maxAnswer = 0;

        for (auto &ele : arr)
            cin >> ele;

        setMax(0, 0);

        bool flag = 0;

        st.clear();


        target = maxAnswer;
        solve(0, {});

        if (st.size())
        {
            vector<int> answer;

            for (auto e : st)
            {
                if (e.size() > answer.size())
                    answer = e;
            }

            for (auto ele : answer)
            {
                cout << ele << ' ';
            }

            flag = 1;
            cout << "sum:" << target;
            cout << endl;
        }

        if (flag == 0)
        {
            cout << "sum:" << 0;
            cout << endl;
        }

        st.clear();
    }
}
