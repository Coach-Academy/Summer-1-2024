#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n,m;
    cin >> n >>m;
    map<int,bool>on;
    while(n--){
        int x;
        cin >> x;
        while(x--){
            int id;
            cin >> id;
            on[id] = 1;
        }
    }
    bool flag = true;
    for(int i = 1;i <=m;i++)
        if(!on[i])
            flag = false;
    cout<< (flag ? "YES" : "NO") << endl;
    return 0;
}