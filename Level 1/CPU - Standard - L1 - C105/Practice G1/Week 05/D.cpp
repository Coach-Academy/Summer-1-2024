#include "iostream"

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> b;
        a += b[0];
        for (int i = 1; i < b.size(); i += 2) a += b[i];
        cout << a << endl;
    }
    return 0;
}