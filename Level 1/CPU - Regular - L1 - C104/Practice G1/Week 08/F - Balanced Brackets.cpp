#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS(){
    string s;
    cin>>s;
    stack<char>stk;
    for(char c:s){
        if(c=='(' || c=='[' || c=='{') stk.push(c);
        else if(stk.empty()) return void(cout<<"NO\n");         // there were no opening brackets
        else if(c==')' && stk.top()=='(' || c==']' && stk.top()=='[' || c=='}' && stk.top()=='{') stk.pop();
        else {                                                  // there is no match
            cout<<"NO\n";
            return;
        }
    }
    if(stk.empty()) cout<<"YES\n";
    else cout<<"NO\n";
}
int main() {
    FIO
    int test = 1;
    cin >> test;
    while (test--) SS();
    return 0;
}
