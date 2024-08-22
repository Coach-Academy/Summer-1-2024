#include <bits/stdc++.h>

using namespace std;

int main()
{

    string alphabet = "";

    for (int i = 0; i < 26; i++)
        alphabet += char(i + 'a');

    // x

    char x;
    cin >> x;

    int lo = 0, up = 25;
    int ans = -1;

    while (lo <= up)
    {
        int mid = (lo + up) / 2;

        if (alphabet[mid] < x)
        {
            lo = mid + 1;
        }
        else
        {
            ans = mid;
            up = mid - 1;
        }
    }

    cout << ans << endl;
}