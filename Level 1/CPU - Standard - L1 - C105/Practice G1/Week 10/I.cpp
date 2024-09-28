#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n,r;
        cin >> n >> r;
        set<int, greater<>> st;
        while(n--){
            int x;
            cin >> x;
            st.insert(x);
        }
        int cnt = 0;
        while(!st.empty()){
            int x = *st.begin();
            st.erase(st.begin());
            if(x - cnt *r > 0)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}