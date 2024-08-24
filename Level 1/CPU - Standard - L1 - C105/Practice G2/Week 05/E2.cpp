#include "iostream"

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int res = 0;

    for (int i = 0; i < 26; i++) {
        if (s.find(i + 'a') != -1) res++;
    }
    cout << res << '\n';
    return 0;
}