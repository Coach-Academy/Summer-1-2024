#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);




signed  main(){
    FAST
    //freopen("game.in","rt",stdin);
    //freopen("game.out","wt",stdout);
    int n;
    cin>>n;
    vector<int>vec(n),ans;
    for(int i=0;i<n;i++)cin>>vec[i];

    for(int i=1;i<n;i++){
        if(vec[i]==1)ans.push_back(vec[i-1]);
    }
    ans.push_back(vec.back());

    cout<<ans.size()<<'\n';

    for(auto x:ans)cout<<x<<' ';

    cout<<'\n';


    return 0;
}