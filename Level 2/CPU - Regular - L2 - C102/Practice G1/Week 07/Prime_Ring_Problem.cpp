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
#define rep(i, n) for (int i = 0; i < n; i++)

int n;

bool notHave(vector<int> &a, int b)
{
    for (auto e : a)
        if (e == b)
            return 0;
    return 1;
}

bool isPrime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

void rec(int id, vector<int> circle)
{
    if (id == n)
    {
        if (isPrime(circle.back() + 1))
        {
            for (int i = 0; i < circle.size() - 1; i++)
                cout << circle[i] << ' ';
            cout << circle.back() << endl;
        }

        return;
    }

    for (int x = 2; x <= n; x++)
    {
        if (notHave(circle, x) && isPrime(circle.back() + x))
        {

            circle.push_back(x);
            rec(id + 1, circle);
            circle.pop_back();
        }
    }
}

signed main()
{

    int tc = 1;

    while (cin >> n)
    {

        if (tc >= 2)
            cout << endl;

        cout << "Case " << tc++ << ":" << endl;

        rec(1, {1});
    }
}
