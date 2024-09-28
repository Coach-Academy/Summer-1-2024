#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    vector<string> v(n);
    map<string,bool> mp;
    for(int i =0;i<n;i++)
        cin >> v[i];
    reverse(v.begin(),v.end());
    for(auto i : v){
        if(mp[i])
            continue;
        cout << i << endl;
        mp[i] = true;
    }
    return 0;
}