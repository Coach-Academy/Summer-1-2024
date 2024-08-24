#include "iostream"
#include "algorithm"

using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        string s, t;
        cin >> s >> t;
        bool flag = false;
        string right;
        for (int i = 0; i < s.size(); i++) {
            string left = right;
            reverse(left.begin(), left.end());
            right += s[i];
            string temp = right + left;
            if (temp.find(t) != -1)
                flag = true;
        }
        cout << (flag ? "YES" : "NO") << '\n';
    }
    return 0;
}