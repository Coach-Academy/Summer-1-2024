#include "iostream"

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '9' and i == 0)
            continue;
        if ('9' - s[i] < s[i] - '0')
            s[i] = '9' - s[i] + '0';
    }
    cout << s << endl;
    return 0;
}