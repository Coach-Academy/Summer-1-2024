#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void TT(){
    int n;
    cin>>n;
    vector<int>v(n), ans;
    for(int &i:v) cin>>i;
    vector<bool>vis(n+1);
    int curMax=n;
    for(int i=n-1;i>=0;i--){
        vector<int>temp;
        while(i>=0 && v[i]!=curMax){
            temp.push_back(v[i]);
            vis[v[i]]=true;
            i--;
        }
        // v[i] = curMax
        temp.push_back(v[i]);
        vis[v[i]]=true;
        while(!temp.empty()) ans.push_back(temp.back()), temp.pop_back();
        while(vis[curMax]) curMax--;
    }
    for(auto x:ans) cout<<x<<" ";
    cout<<'\n';
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) TT();
    return 0;
}
