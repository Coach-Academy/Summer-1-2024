#include "iostream"
#include "algorithm"
#include "string"
#include "iomanip"
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    reverse(s.begin(), s.end());
    cout << (s == t ? "YES" : "NO") << '\n';
    return 0;
}