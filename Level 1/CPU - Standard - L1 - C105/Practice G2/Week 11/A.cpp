#include <bits/stdc++.h>
using namespace std;

string sum_s(string s, int idx = 0, int total = 0) {
    if (idx == s.size())
        return to_string(total);
    return sum_s(s, idx + 1, total + (s[idx] - '0'));
}

string final(string t) {
    string summed = sum_s(t);
    if (summed.size() == 1)
        return summed;
    return final(summed);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int n;
    cin >> s >> n;


    int sum = 0;
    for (int i = 0; i < s.size(); ++i) {
        sum += (s[i] - '0');
    }

    cout << final(to_string(sum * n)) << endl;

    return 0;
}
