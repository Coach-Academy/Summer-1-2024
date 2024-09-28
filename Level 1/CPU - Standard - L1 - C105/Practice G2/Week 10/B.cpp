#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string s;
    getline(cin, s);
    set<char> st;
    for(auto i : s)
        if(isalpha(i))
            st.insert(i);

    cout << st.size() << endl;
    return 0;
}