#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n , m , a;
    cin >> n >> m >> a;
    long long length = ceil (n / a); // number of flagstones used in length
    long long width = ceil (m / a); // number of flagstones used in width

    cout << length * width;

    return 0;
}
