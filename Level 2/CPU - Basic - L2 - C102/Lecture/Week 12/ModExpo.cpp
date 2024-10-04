#include <iostream>

using namespace std;

long long binaryExponentiation(long long a, long long b, long long m)
{

    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b = b >> 1;
    }
    return res;
}

long long binaryExponentiationRecursive(long long a, long long b, long long m)
{
    if (b == 0)
        return 1;
    if (b % 2)
    {
        return (a % m * binaryExponentiationRecursive(a, b - 1, m) % m) % m;
    }

    long long res = binaryExponentiationRecursive(a, b / 2, m);
    return (res % m * res % m) % m;
}

int main()
{

    long long a, b, m;

    cin >> a >> b >> m;

    cout << binaryExponentiation(a, b, m) << endl;

    return 0;
}
