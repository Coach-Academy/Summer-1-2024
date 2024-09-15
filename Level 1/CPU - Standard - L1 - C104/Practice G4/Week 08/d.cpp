#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);




signed  main(){
    FAST
    //freopen("game.in","rt",stdin);
    //freopen("game.out","wt",stdout);
    int n;
    cin>>n;
    string dir;
    cin>>dir;
    vector<int>pos(n);
    for(int i=0;i<n;i++)cin>>pos[i];
    int mn=INT_MAX;
    for(int i=1;i<n;i++){
        if(dir[i]=='L'&&dir[i-1]=='R'){
            mn=min(mn,(pos[i]-pos[i-1])/2);
        }
    }
    if(mn==INT_MAX)cout<<"-1\n";
    else
        cout<<mn<<'\n';
    return 0;
}