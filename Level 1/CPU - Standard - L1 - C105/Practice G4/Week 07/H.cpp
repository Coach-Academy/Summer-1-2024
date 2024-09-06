#include <bits/stdc++.h>

using namespace std;

bool isPal(string s){
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}
int main(){
    string s;
    cin >> s;
    bool flag = false;
    for(int i =0;i<10;i++){ // 10^9
        string temp = s;
        if(isPal(temp)){
            flag = true;
            break;
        }
        s = '0' + s;
    }
    cout << (flag ? "Yes" : "No") << '\n'; // o(n)
    return 0;
}