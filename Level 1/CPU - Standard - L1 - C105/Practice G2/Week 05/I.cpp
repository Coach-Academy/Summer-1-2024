#include "iostream"
#include "algorithm"
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        string s;
        cin >> s;
        sort(s.begin(),s.end());
        cout << (alpha.find(s) != -1 ? "Yes": "No") << '\n';
    }
    return 0;
}