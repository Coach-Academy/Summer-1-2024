#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS(){
    int n;
    cin>>n;
    stack<string>names;
    while(n--){
        string s;
        cin>>s;
        names.push(s);
    }
    set<string>vis;
    while(names.empty()==false){
        if(vis.count(names.top())==0){
            cout<<names.top()<<'\n';
            vis.insert(names.top());
        }
        names.pop();
    }
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
