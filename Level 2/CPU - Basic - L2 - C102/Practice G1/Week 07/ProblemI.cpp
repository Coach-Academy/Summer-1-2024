#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1);
#define ll long long
const double eps = 1e-7;
vector<int>v;
vector<long double>res , finalAns;
int n;
bool valid (long double d){
    res.push_back(v[0] + d);
    int stations = 1;
    long double last_point = v[0] + 2 * d;
    for (int i = 1; i < n; i++){
        if (last_point >= v[i])
            continue;
        stations++;
        last_point = v[i] + 2 * d;
        res.push_back(v[i] + d);
    }
    if (stations <= 3){
        for (auto i : res)
            finalAns.push_back(i);
     return true;
    }
    return false;

}
int main()
{
    cin >> n;
    v = vector<int>(n);
    for (auto & i : v)
        cin >> i;
    sort (v.begin() , v.end());
    if (n == 3){
        cout << fixed << setprecision(6);
        cout << 0 << "\n" << v[0] << " " << v[1] << " " << v[2] ;
        return 0;
    }

    long double st = 0 , en = 1e9 , ans = 0;
    while (en - st > eps) {
        long double mid = (st + en) / 2;
        if (valid (mid)){
            ans = mid;
            en = mid;
        }
        else
            st = mid;
    }

    cout << fixed << setprecision(6);
    cout << ans << "\n";

    for (int i=1;i<=3;i++)
    {
        cout << finalAns.back()<< " ";
        finalAns.pop_back();

    }

    return 0;
}
