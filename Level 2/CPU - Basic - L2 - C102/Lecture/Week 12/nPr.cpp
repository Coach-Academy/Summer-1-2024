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
    return binaryExponentiation(a, m - 2, m);
}

// long long factorial(long long n, long long m)
// {
//     long long fact = 1;
//     for (long long i = 1; i <= n; i++)
//     {
//         fact = (fact * i) % m;
//     }
//     return fact;
// }
// pre calculate factorial of all numbers from 1 to 10^6
long long factorial[(int)1e6 + 1];
void pre_calculate(long long n, long long m)
{
    factorial[0] = 1;
    factorial[1] = 1;
    for (long long i = 2; i <= n; i++)
    {
        factorial[i] = (factorial[i - 1] * i) % m;
    }
}

long long nPr(long long n, long long r, long long m)
{
    if (r > n)
        return 0; long long nom = factorial[n];
    long long den = (factorial[r] * factorial[n - r]) % m;

    return (nom * modularInverse(den, m)) % m;

    long long nom = factorial[n];
    long long den = factorial[n - r];

    return (nom * modularInverse(den, m)) % m;
}

int main()
{
    // 1e9+7 is a prime number usually given in the question
    pre_calculate(1e6, 1e9 + 7);

    return 0;
}
