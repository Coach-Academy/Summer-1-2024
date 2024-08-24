#include "iostream"

using namespace std;

int main(){
    string s;
    cin >> s;
    s.front() = toupper(s.front());
    cout << s << '\n';
    // a - > A
    // 'a' - 32 - > 'A'
    // 'b' - 32 - > 'B'
    // s[0] = s[0] - 32
    return 0;
}