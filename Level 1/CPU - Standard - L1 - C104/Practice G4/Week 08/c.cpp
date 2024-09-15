#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);




signed  main(){
    FAST
    //freopen("game.in","rt",stdin);
    //freopen("game.out","wt",stdout);
    int n;
    cin>>n;
    vector<vector<int>>vec(4);

    for(int i=0;i<n;i++){
        int skill;
        cin>>skill;
        vec[skill].push_back(i+1);
    }

    int mn=min({vec[1].size(),vec[2].size(),vec[3].size()});

    cout<<mn<<'\n';

    for(int i=0;i<mn;i++)
        cout<<vec[1][i]<<' '<<vec[2][i]<<' '<<vec[3][i]<<'\n';


    return 0;
}