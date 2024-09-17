#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS(){
    int Q;
    cin>>Q;
    queue<int>q;            // my sequence A
    priority_queue<int, vector<int>, greater<int>>pq;
    while(Q--){
        int type;
        cin>>type;
        if(type==1){
            int x;
            cin>>x;
            q.push(x);
        }
        else if(type==2){
            // we will give priority to the pq first then queue second
            if(!pq.empty()) cout<<pq.top()<<'\n', pq.pop();
            else cout<<q.front()<<'\n', q.pop();
        }
        else while(!q.empty()) pq.push(q.front()), q.pop();
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
