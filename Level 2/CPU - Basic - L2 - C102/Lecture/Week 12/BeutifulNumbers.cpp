#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll modular_exponentiation(ll a, ll b, ll m)
{
    if (a == 0 or a == 1)
        return a % m;

    if (b == 0)
        return 1 % m;

    if (b & 1)
        return (a % m * modular_exponentiation(a, b - 1, m) % m) % m;

    ll res = modular_exponentiation(a, b / 2, m);
    return (res % m * res % m) % m;
}

ll mod_inverse(ll n, ll m)
{
    return modular_exponentiation(n, m - 2, m);
}

ll factorial[(int)1e6 + 1];

void precalculate(ll n, ll m)
{
    factorial[0] = 1; // 0! = 1
    factorial[1] = 1; // 1! = 1
    // 5! = 5 * 4!
    // 4! = 4 * 3!
    // 3! = 3 * 2!
    // 2! = 2 * 1
    // 1! = 1
    for (ll i = 2; i <= n; i++)
    {
        factorial[i] = (factorial[i - 1] * i) % m;
    }
}

ll nCr(ll n, ll r, ll m)
{
    if (n == 0 or r == 0)
        return 1;
    if (r > n)
        return 0;

    ll nom = factorial[n];
    ll den = (factorial[r] * factorial[n - r]) % m;

    return (nom * mod_inverse(den, m)) % m;
}
ll nPr(ll n, ll r, ll m)
{
    if (r > n)
        return 0;

    ll nom = factorial[n];
    ll den = factorial[n - r];

    return (nom * mod_inverse(den, m)) % m;
}
int main()
{
    ll m = 1e9 + 7;
    ll a, b, n;
    cin >> a >> b >> n;

    // good number: all digits are either a or b
    // exactly number: sum of the digits of the good numbers is also a good number

    // sum of digits = a*x + b*(n-x)
    // in order for a*x + b*(n-x)

    precalculate(n, m);

    ll sum = 0;
    for (ll x = 0; x <= n; x++)
    {
        ll expectedSum = a * x + b * (n - x);
        string s = to_string(expectedSum);

        bool good = true;

        for (auto &ch : s)
        {
            if (ch == '0' + a or ch == '0' + b)
                continue;
            good = false;
        }

        if (good)
        {
            sum += nCr(n, x, m);
            sum %= m;
        }
    }

    cout << sum << endl;

    return 0;
}