#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long l = (n + a - 1) / a;
    long long w = (m + a - 1) / a;
    cout << l * w << '\n';
    return 0;
}