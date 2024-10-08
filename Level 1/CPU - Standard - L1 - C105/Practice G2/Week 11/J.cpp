#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
void solve(string &s,int i){
    if(i == s.size() || s[i] == '.')
        return;
    cout << s[i];
    solve(s,i+1);
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string s;
    cin >> s;
    solve(s,0);
    return 0;
}