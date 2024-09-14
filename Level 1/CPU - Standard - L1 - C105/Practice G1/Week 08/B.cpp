#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,d;
    cin >> n >> d;
    deque<int> dq(n);
    for(auto &i : dq) cin >> i;
    while(d--){
        dq.push_back(dq.front());
        dq.pop_front();
    }
    for(auto i : dq) cout << i << " ";
    cout << '\n';
    return 0;
}