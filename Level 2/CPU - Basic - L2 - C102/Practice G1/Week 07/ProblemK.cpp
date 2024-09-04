#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1);
#define ll long long
int main()
{
    string s;
    cin >> s;
    int nb , ns , nc;
    cin >> nb >> ns >> nc;
    int pb , ps , pc;
    cin >> pb >> ps >> pc;
    int rb = 0 , rs = 0 , rc = 0;
    ll r ;
    cin >> r;
    for (auto i : s){
        if (i == 'B')
            rb++;
        else if (i == 'S')
            rs++;
        else
            rc++;
    }
    ll st = 0 , en = 1e14 , ans = 0;
    while (st <= en){
        ll mid = (st + en) / 2;
        ll needed_b = max (0LL , mid * rb - nb);
        ll needed_s = max (0LL , mid * rs - ns);
        ll needed_c = max (0LL , mid * rc - nc);

        ll cost = needed_b * pb + needed_s * ps + needed_c * pc;

        if (cost <= r)
            st = mid+1;
        else
            en = mid - 1;

    }

    cout << en ;

    return 0;
}
