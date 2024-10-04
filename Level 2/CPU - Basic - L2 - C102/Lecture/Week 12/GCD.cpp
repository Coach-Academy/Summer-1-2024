#include <iostream>

using namespace std;

long long gcd(long long a, long long b)
{

    if (b == 0)
        return a;

    return gcd(b, a % b);
}
long long gcdIterative(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{

    return 0;
}
