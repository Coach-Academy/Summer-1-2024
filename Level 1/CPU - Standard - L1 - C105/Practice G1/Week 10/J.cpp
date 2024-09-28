#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int q;
    cin >> q;
    multimap<int,int,greater<>> poly;
    queue<int> mono;
    map<int,bool> serv;
    int id = 1;
    while(q--){
        int op;
        cin >> op;
        if(op == 1){
            int m;
            cin >> m;
            poly.insert({m,id});
            mono.push(id);
            id++;
        } else if (op == 2){
            while(serv[mono.front()])
                mono.pop();
            serv[mono.front()] = true;
            cout << mono.front() << " ";
        } else {
            while(serv[poly.begin()->second])
                poly.erase(poly.begin());
            serv[poly.begin()->second] = true;
            cout << poly.begin()->second << " ";
        }
    }
    return 0;
}