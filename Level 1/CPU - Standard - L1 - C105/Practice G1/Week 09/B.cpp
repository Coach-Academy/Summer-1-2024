#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >>t;
    stack<int> st;
    while(t--){
        int q;
        cin >> q;
        switch(q){
            case 1: {
                int n;
                cin >>n;
                st.push(n);
                break;
            }
            case 2 : {
                if(!st.empty())
                    st.pop();
                break;
            }
            case 3 : {
                if(st.empty())
                    cout << "Empty!" << endl;
                else
                    cout << st.top() << endl;
            }
        }
    }
    return 0;
}