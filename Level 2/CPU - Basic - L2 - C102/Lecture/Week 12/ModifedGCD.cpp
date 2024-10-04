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
    long long a, b;
    cin >> a >> b;

    long long g = __gcd(a, b);

    vector<long long> allFactorsOfG;

    for (long long f = 1; f * f <= g; f++)
    {
        if (g % f == 0)
        {
            allFactorsOfG.push_back(f);
            if (f != g / f)
                allFactorsOfG.push_back(g / f);
        }
    }

    sort(allFactorsOfG.begin(), allFactorsOfG.end());

    int q;
    cin >> q;

    while (q--)
    {
        long long low, high;
        cin >> low >> high;

        auto it = upper_bound(allFactorsOfG.begin(), allFactorsOfG.end(), high);
        if (it == allFactorsOfG.begin())
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            it--;
            if (*it >= low)
            {
                cout << *it << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}