#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);




signed  main(){
    FAST
    //freopen("game.in","rt",stdin);
    //freopen("game.out","wt",stdout);
    int n,m;
    cin>>n>>m;
    int mx=0,idx;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;

        int rounds=(c+m-1)/m;// (x+y-1)/y

        if(rounds>=mx){
            mx=rounds;
            idx=i;
        }
    }
    cout<<idx+1<<'\n';

    return 0;
}