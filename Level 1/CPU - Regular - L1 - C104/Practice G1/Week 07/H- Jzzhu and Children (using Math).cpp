#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void SS(){
    int n, m;
    cin>>n>>m;
    vector<int>candy(n);
    int mx=0, ans;
    for(int i=0;i<n;i++){
        cin>>candy[i];
        if(mx<=(candy[i]+m-1)/m){
            mx= (candy[i]+m-1)/m;
            ans=i+1;
        }
    }
    cout<<ans<<'\n';
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
