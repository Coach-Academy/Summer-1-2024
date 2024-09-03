#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long l = ceil((double) n / (double) a);
    long long w = m / a;
    if (m % a > 0) w++;
    cout << l * w << '\n';
    return 0;
}