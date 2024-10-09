#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

bool solve(int i ,string &s){
    if ( i == s.size())
        return true;
    bool res = ((i%2 == 1 and isupper(s[i])) or (i%2 == 0 and islower(s[i])));
    res &= solve(i+1,s);
    return res;
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string s;
    cin >> s;
    cout << (solve(0,s) ? "Yes" : "No") << endl;
    return 0;
}