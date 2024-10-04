#include <iostream>

using namespace std;

long long binaryExponentiation(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b = b >> 1;
    }
    return res;
}

long long binaryExponentiationRecursive(long long a, long long b)
{
    if (b == 0)
        return 1;
    if (b % 2)
    {
        return a * binaryExponentiationRecursive(a, b - 1);
    }

    long long res = binaryExponentiationRecursive(a, b / 2);
    return res * res;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << binaryExponentiation(a, b) << endl;
    return 0;
}
