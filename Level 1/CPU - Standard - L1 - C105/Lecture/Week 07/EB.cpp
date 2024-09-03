#include <bits/stdc++.h>

using namespace std;
bool isPal(string s){ // q
    int q = (int)s.size();
    for(int i =0;i < q/2;i++){
        if(s[i] != s[q-i-1])
            return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n ;
    string s; cin >> s;
    int l = -1,r= -1;
    for(int i = 0; i < n;i++) {
        if (s[i] == 'X' && l == -1)
            l = i;
        if (s[i] == 'X')
            r = i;
    }
    if(l != -1 && r != -1){
        string temp = s.substr(l,r-l+1); // q
        cout << (isPal(temp) ? "Yes" : "No");
    }
    return 0;
}
