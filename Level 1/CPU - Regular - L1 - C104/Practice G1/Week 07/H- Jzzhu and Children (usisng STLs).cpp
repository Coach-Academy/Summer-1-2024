#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void TT(){
    int n, m;
    cin>>n>>m;
    vector<int>candies(n);
    deque<int>Q;
    for(int i=0;i<n;i++) cin>>candies[i], Q.push_back(i);
    while(Q.size()!=1){
        candies[Q.front()]-=m;
        if(candies[Q.front()]>0) Q.push_back(Q.front());
        Q.pop_front();
    }
    cout<<Q.front()+1<<'\n';
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t=1;
//    cin>>t;
    while(t--) TT();
    return 0;
}
