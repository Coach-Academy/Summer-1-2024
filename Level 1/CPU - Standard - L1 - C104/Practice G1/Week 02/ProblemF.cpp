#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int first = n / 100;
    int last  = n % 10;

    if (first == last)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
