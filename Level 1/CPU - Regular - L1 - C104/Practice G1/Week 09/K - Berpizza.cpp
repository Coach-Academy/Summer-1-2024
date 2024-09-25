#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS(){
    /*
     * Customer:
     * VisCustomers:                {2, 10} {1, 8} {3, 6} {4, 9}
     *
     * Mono (Queue):                {4, 9}
     * Poly (PriorityQueue):        {1, 8}   {3, 6}
     */
    int Q, custID = 1;
    cin>>Q;
    queue<int>mono;
    priority_queue<pair<int, int>>poly;
    map<int, bool>vis;
    while(Q--){
        int t;
        cin>>t;
        if(t==1){
            int e;
            cin>>e;
            mono.push(custID);
            poly.push({e, -custID});
            custID++;
        }
        else if(t==2){
            while(vis[mono.front()]) mono.pop();
            cout<<mono.front()<<' ';
            vis[mono.front()]=true;
            mono.pop();
        }
        else{
            while(vis[-poly.top().second]) poly.pop();
            cout<<-poly.top().second<<' ';
            vis[-poly.top().second]=true;
            poly.pop();
        }
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
