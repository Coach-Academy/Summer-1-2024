#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void TT(){
    int n;
    cin>>n;
    priority_queue<int, vector<int>, greater<int>>pq;
    ll health = 0;
    while(n--){
        int a_i;
        cin>>a_i;
        health+=a_i;
        pq.push(a_i);
        if(health<0){
            health-=pq.top();
            pq.pop();
        }
    }
    cout<<pq.size()<<'\n';
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
