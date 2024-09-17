#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS(){
    int q;
    cin>>q;
    priority_queue<int, vector<int>, greater<int>>pq;
    vector<string>originalOps;
    while(q--){
        string type;
        cin>>type;
        if(type=="insert"){
            int x;
            cin>>x;
            pq.push(x);
            originalOps.emplace_back(type+" "+to_string(x));
        }
        else if(type=="removeMin"){
            if(pq.empty()){     // add any dummy value
                pq.push(0);
                originalOps.emplace_back("insert 0");
            }
            pq.pop();
            originalOps.emplace_back(type);
        }
        else{
            int x;
            cin>>x;
            while(!pq.empty() && pq.top()<x){
                pq.pop();
                originalOps.emplace_back("removeMin");
            }
            if(pq.empty() || pq.top()>x){
                pq.push(x);
                originalOps.emplace_back("insert "+to_string(x));
            }
            originalOps.emplace_back(type+" "+to_string(x));
        }
    }
    cout<<originalOps.size()<<'\n';
    for(auto op:originalOps) cout<<op<<'\n';
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
