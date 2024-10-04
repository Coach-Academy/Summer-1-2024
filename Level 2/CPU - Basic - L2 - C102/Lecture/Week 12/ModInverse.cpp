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

long long modularInverse(long long a, long long m)
{
    // fermat's little theorem says: a^(m-1) = 1 (mod m), where m is prime
    return binaryExponentiation(a, m - 2, m);
}

int main()
{

    long long a, b, m;

    cin >> a >> b >> m;

    cout << binaryExponentiation(a, b, m) << endl;

    return 0;
}
