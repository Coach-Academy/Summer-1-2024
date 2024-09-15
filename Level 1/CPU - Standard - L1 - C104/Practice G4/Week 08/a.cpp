#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);




signed  main(){
    FAST
    //freopen("game.in","rt",stdin);
    //freopen("game.out","wt",stdout);
    int n;
    cin>>n;
    vector<int>vec(n);

    for(int i=0;i<n;i++)cin>>vec[i];

    sort(vec.begin(),vec.end());

    if(vec[n-1]>0){
        cout<<1<<' '<<vec[0]<<'\n';
        cout<<1<<' '<<vec[n-1]<<'\n';
        cout<<n-2<<' ';
        for(int i=1;i<n-1;i++)cout<<vec[i]<<' ';
        cout<<'\n';
    }
    else{
        cout<<1<<' '<<vec[0]<<'\n';
        cout<<2<<' '<<vec[1]<<' '<<vec[2]<<'\n';
        cout<<n-3<<' ';
        for(int i=3;i<n;i++)cout<<vec[i]<<' ';
        cout<<'\n';
    }

    return 0;
}