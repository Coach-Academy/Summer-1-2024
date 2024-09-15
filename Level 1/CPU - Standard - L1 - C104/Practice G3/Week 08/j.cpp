#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);




signed  main(){
    FAST
    //freopen("game.in","rt",stdin);
    //freopen("game.out","wt",stdout);
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        vector<int>idx(n+1),ans(n+1);
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            idx[x]=i;
        }

        for(int i=n;i>=1;i--){
            ans[i]=(idx[i]%i);
            for(int j=i-1;j>=1;j--){
                idx[j]=(idx[j]+(i-ans[i]))%i;
            }
        }

        for(int i=1;i<=n;i++)cout<<ans[i]<<' ';

        cout<<'\n';
    }

    return 0;
}