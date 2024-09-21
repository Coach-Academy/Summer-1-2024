#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >>n;
    vector<string> res;
    priority_queue<int,vector<int>, greater<int>> pq;
    while(n--){
        string op;
        cin >> op;
        if(op == "insert"){
            int x;
            cin >> x;
            pq.push(x);
            res.push_back("insert " + to_string(x));
        } else if ( op == "removeMin"){
            if(!pq.empty())
                pq.pop();
            else
                res.push_back("insert 1");
            res.push_back("removeMin");
        } else if ( op  == "getMin"){
            int x;
            cin >> x;
            while(!pq.empty() && pq.top() < x){
                pq.pop();
                res.push_back("removeMin");
            }
            if(pq.empty() || pq.top() != x){
                pq.push(x);
                res.push_back("insert " + to_string(x));
            }
            res.push_back("getMin " + to_string(x));
        }
    }
    cout << res.size() << endl;
    for(auto i : res)
        cout << i << endl;
    return 0;
}