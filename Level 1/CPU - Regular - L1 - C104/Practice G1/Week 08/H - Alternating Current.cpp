#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS(){
    string s;
    cin>>s;
    stack<char>stk;
    for(char c:s){
        if(stk.empty() || stk.top() != c) stk.push(c);
        else stk.pop();
    }
    if(stk.empty()) cout<<"Yes\n";
    else cout<<"No\n";
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    FIO
    int test = 1;
//    cin >> test;
    while (test--) SS();
    return 0;
}
