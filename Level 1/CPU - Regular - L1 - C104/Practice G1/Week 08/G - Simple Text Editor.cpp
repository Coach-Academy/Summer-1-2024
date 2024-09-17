#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS(){
    string s;
    stack<string>state;
    state.push(s);
    int q;
    cin>>q;
    while(q--){
        int type;
        cin>>type;
        if(type==1){
            string w;
            cin>>w;
            s+=w;
            state.push(s);
        }
        else if(type==2){
            int k;
            cin>>k;
            while(k--) s.pop_back();
            state.push(s);
        }
        else if(type==3){
            int k;
            cin>>k;
            cout<<s[k-1]<<'\n';
        }
        else state.pop(), s=state.top();
    }
}
int main() {
    FIO
    int test = 1;
//    cin >> test;
    while (test--) SS();
    return 0;
}
