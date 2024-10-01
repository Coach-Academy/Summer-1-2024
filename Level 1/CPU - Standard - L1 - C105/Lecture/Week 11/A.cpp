#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
int sum(vector<int> v, int i){
    if(i == (int)v.size())
        return 0;
    return v[i] + sum(v, i+1);
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    for(int T = 1 ; T<=t;T++){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i =0;i<n;i++)
            cin >> v[i];
        cout << "Case " << T << ": " << sum(v,0) << endl;
    }
    return 0;
}