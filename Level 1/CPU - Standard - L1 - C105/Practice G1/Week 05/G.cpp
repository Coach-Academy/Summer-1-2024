#include "iostream"
#include "algorithm"
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int res = 0;
    string temp = "";
    for(int i =0;i<=k;i++) temp += i + '0';
    while (n--) {
        string s;
        cin >> s;
        sort(s.begin(),s.end());
        if(s == temp) res++;
    }
    cout << res << '\n';
    return 0;
}