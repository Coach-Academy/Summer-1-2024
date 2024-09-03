//نفعكم الله ووفقكم -ادع لي-
//اللهم حرر فلسطين من كيد الصهاينة واجعل كيدهم في نحورهم
//اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين. اللهم اطمس على أعداء الدين والمدنسين -الصهاينة اللصوص-
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, k;
    cin >> n >> k;
    if (n % 2 == 0) {           // even
        if (k <= n / 2) cout << 2 * k - 1 << '\n';
        else {
            long long newK = k - n / 2;
            cout << 2 * newK << '\n';
        }
    } else {                    // odd
        if (k <= (n + 1) / 2) cout << 2 * k - 1 << '\n';
        else {
            long long newK = k - (n + 1) / 2;
            cout << 2 * newK << '\n';
        }
    }
}