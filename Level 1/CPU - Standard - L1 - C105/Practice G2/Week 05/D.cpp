#include "iostream"

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string b;
        cin >> b;
        for (int i = 0; i < b.size(); i += 2)
            cout << b[i];
        cout << b.back() << '\n';
    }
    return 0;
}