#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{

    if (b == 0)
        return a;

    return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long gcdAll = 0;
        vector<long long> allDiff;

        sort(arr.begin(), arr.end());

        for (int i = 1; i < n; i++)
            allDiff.push_back(arr[i] - arr[i - 1]);

        for (auto &diff : allDiff)
            gcdAll = __gcd(gcdAll, diff);

        if (gcdAll == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << gcdAll << endl;
        }
    }
    return 0;
}