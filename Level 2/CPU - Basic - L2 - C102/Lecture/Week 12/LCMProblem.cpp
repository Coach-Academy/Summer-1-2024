#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{

    if (b == 0) // base case
        return a;

    return gcd(b, a % b); // 4 log(35)
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
        long long l, r;
        cin >> l >> r;
        // find x,y such that l<=x<y<=r and l <= lcm(x,y) <= r

        // x = l, y=l+1, what is the lcm? gcd(x, x+1) = 1, lcm(l,l+1) = l*(l+1)
        // x = l, y=l+2, what is the lcm? gcd(x, x+2) l = 6, 6+2, = 8, lcm(l,l+2) = 6*8 / gcd(6,8) = 24
        // x = l, y=2*l, what is the lcm?

        // lcm (l, 2*l) = 2*l,
        // gcd(l, 2*l) = l,
        // lcm(l,2*l) = (l * l* 2) / l = 2*l

        long long x = l, y = 2 * l;
        long long lcm = y;

        if (lcm > r)
            cout << -1 << " " << -1 << endl;
        else
            cout << x << " " << y << endl;
    }
    return 0;
}