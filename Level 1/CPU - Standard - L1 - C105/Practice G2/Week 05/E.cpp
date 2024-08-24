#include "iostream"
#include "string"

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int cnt = 0;
    for(char c = 'a'; c<='z';c++){
        if(s.find(c) != -1) cnt++;
    }
    cout << cnt << '\n';
    return 0;
}