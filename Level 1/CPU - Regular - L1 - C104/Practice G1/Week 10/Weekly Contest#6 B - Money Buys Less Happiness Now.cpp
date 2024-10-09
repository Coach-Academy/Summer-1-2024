#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
void TT() {
    int m, x;
    cin>>m>>x;
    long long curMoney = x;
    priority_queue<int>pq;
    int dummy;
    cin>>dummy;                                     // first month to be skipped
    for(int i=1;i<m;i++){
        int c;
        cin>>c;
        if(c<=curMoney) pq.push(c), curMoney-=c;
        else if(pq.empty()==false && pq.top()>c){
            curMoney+=pq.top(), pq.pop();
            pq.push(c), curMoney-=c;
        }
        curMoney+=x;
    }
    cout<<pq.size()<<'\n';
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST
    int testCases = 1;
    cin >> testCases;
    while (testCases--) TT();
    return 0;
}