#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
void rec(int i, string &s, set<string>&st){
    if(i==(int)(s.size())-1) return void(st.insert(s));
    for(int j=i;j<s.size();j++){
        swap(s[i], s[j]);
        rec(i+1, s, st);
        swap(s[i], s[j]);
    }
}
void TT(){
    string s;
    cin>>s;
    set<string>st;
    rec(0, s, st);
    cout<<st.size()<<'\n';
    for(auto str:st) cout<<str<<'\n';
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST
    int testCases = 1;
//    cin >> testCases;
    while (testCases--) TT();
    return 0;
}