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
        vector<int>vec(n),mx(n);
        int m=0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            m=max(m,vec[i]);
            mx[i]=m;
        }
        int r=n-1;
        for(int i=n-1;i>=0;i--){
            if(vec[i]==mx[i]){
                for(int j=i;j<=r;j++)cout<<vec[j]<<' ';
                r=i-1;
            }
        }
        cout<<'\n';
    }

    return 0;
}