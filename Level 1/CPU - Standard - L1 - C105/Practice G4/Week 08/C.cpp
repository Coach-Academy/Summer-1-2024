#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >>n;
    vector<int> v[3];
    // t = 0 math , t= 1 prog t = 2 PE
    for(int i = 1;i<=n;i++){
        int x;
        cin >> x;
        v[x-1].push_back(i);
    }
    cout << min({v[0].size(),v[1].size(),v[2].size()}) << '\n';
    while(!v[0].empty() && !v[1].empty() && !v[2].empty()){
        cout << v[0].back() << " " << v[1].back() << " " << v[2].back() << '\n';
        v[0].pop_back();
        v[1].pop_back();
        v[2].pop_back();
    }
    return 0;
}