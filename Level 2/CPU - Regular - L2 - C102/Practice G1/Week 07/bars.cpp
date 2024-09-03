#include <bits/stdc++.h>

using namespace std;

int target;

vector<int> bars;

bool isValid(int i, int sum)
{
    if (i == bars.size())
    {
        return sum == target;
    }

    return isValid(i + 1, sum) | isValid(i + 1, sum + bars[i]);
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> target >> n;

        bars = vector<int>(n);

        for(int i = 0; i < n; i++)
            cin >> bars[i];

        cout << (isValid(0, 0) ? "YES" : "NO") << endl;
    }
}