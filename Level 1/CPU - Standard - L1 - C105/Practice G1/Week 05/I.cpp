#include "iostream"
#include "string"
#include "algorithm"
using namespace std;

int main(){
    int n; cin >> n;
    while(n--) {
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        if (alpha.find(s) != -1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}