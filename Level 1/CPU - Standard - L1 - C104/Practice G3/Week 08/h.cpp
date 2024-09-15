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
        string s;
        cin>>s;
        int cnt=0,mx=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='P')cnt++;
            else{
                mx=max(mx,cnt);
                cnt=0;
            }

        }
        cout<<mx<<'\n';
    }

    return 0;
}