#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int q;
    cin >> q;
    string s;
    stack<string> st;
    while(q--){
        int op;
        cin >> op;
        if(op == 1){
            string w;
            cin >> w;
            st.push(s);
            s+=w;
        } else if ( op == 2){
            int k;
            cin >> k;
            st.push(s);
            s.erase(s.end() - k, s.end());
        } else if ( op == 3){
            int k;
            cin >> k;
            cout << s[k-1] << endl;
        } else {
            s= st.top();
            st.pop();
        }
    }
    return 0;
}