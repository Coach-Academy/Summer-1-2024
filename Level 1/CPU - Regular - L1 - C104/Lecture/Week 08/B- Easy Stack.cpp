#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void TT(){
    int q;
    cin>>q;
    stack<int>stk;
    while(q--){
        int type;
        cin>>type;
        if(type==1){
            int n;
            cin>>n;
            stk.push(n);
        }
        else if(type==2){
            if(!stk.empty()) stk.pop();
        }
        else{       // then the type will be 3
            if(stk.empty()) cout<<"Empty!\n";
            else cout<<stk.top()<<'\n';
        }
    }
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t=1;
//    cin>>t;
    while(t--) TT();
    return 0;
}
