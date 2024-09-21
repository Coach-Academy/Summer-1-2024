#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string s;
    cin >> s;
    stack<char> st;
    for(int i = 0;i < (int) s.size(); i++){
        if(!st.empty() and st.top() == s[i])
            st.pop();
        else
            st.push(s[i]);
    }
    cout << (st.empty() ? "Yes" : "No") << endl;
    return 0;
}