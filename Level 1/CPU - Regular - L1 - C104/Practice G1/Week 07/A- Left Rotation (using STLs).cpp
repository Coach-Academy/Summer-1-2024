#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void TT(){
    int n, d;
    cin>>n>>d;
    deque<int>dq(n);
    for(int &i:dq) cin>>i;
    while(d--){
        dq.push_back(dq.front());
        dq.pop_front();
    }
    for(auto x:dq) cout<<x<<' ';
    cout<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t=1;
//    cin>>t;
    while(t--) TT();
    return 0;
}
