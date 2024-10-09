#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

void solve(int i , string s){
    if(i == s.size() or s[i] == '.')
        return;
    cout << s[i];
    solve(i+1,s);
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string s;
    cin >> s;
    solve(0,s);
    return 0;
}