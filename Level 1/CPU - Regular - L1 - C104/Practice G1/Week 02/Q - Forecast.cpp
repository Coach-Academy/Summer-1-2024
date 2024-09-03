//نفعكم الله ووفقكم -ادع لي-
//اللهم حرر فلسطين من كيد الصهاينة واجعل كيدهم في نحورهم
//اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين. اللهم اطمس على أعداء الدين والمدنسين -الصهاينة اللصوص-
#include <bits/stdc++.h>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    double r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << fixed << setprecision(6) << max(r1, r2) << "\n" << min(r1, r2) << '\n';
    return 0;
}