#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int sum (string s){
    int ret = 0;
    for(auto i : s)
        ret += (i - '0');
    return ret;
}
int super(string s){
    if(s.size() == 1)
        return stoi(s);
    return super(to_string(sum(s)));
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string n;
    int k;
    cin >> n >> k;
    int ans = super(n) * k;
    cout << super(to_string(ans)) << endl;
    return 0;
}