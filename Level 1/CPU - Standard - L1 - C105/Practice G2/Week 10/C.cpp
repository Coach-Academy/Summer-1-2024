#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        bool flag = false;
        for(char c = 'a'; c <='z';c++){
            if(a.find(c) != -1 and b.find(c) != -1)
                flag = true;
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}