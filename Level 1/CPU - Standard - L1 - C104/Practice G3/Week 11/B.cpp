#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>v, int i){
    if(i==0) return v[i];
    return v[i] + solve(v, i-1);
}
int main()
{
    int t; cin>>t;
    for(int i = 1 ; i <= t ; i++){
        int n; cin>>n;
        vector<int>v(n);
        for(auto& it : v) cin>>it;
        cout<<"Case "<<i<<": "<<solve(v, n-1)<<endl;
    }
    return 0;
}
