#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string s;
    cin >> s;
    set<char> st;
    for(auto i : s)
        st.insert(i);
    cout <<(st.size() %2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;
    return 0;
}