#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void TT(){
    int n;
    cin>>n;
    deque<int>dq(n);
    int ans[n];
    for(int &i:dq) cin>>i;
    for(int i=n;i>=1;i--){
        auto itr = find(dq.begin(), dq.end(), i);
        int index = itr-dq.begin();
        rotate(dq.begin(), dq.begin()+index, dq.end());
        dq.pop_front();
        ans[i-1]=(index+1)%i;
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<' ';
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
