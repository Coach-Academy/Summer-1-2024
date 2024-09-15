#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void TT(){
    int n, d;
    cin>>n>>d;
    queue<int>q;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    while(d--){
        q.push(q.front());
        q.pop();
    }
    while(!q.empty()) cout<<q.front()<<" ", q.pop();
    cout<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t=1;
//    cin>>t;
    while(t--) TT();
    return 0;
}
