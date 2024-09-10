#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
const int MOD=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
#define all(x) (x).begin(),(x).end()
#define mm(f, x) memset(f,x,sizeof(f))
#define f(n) for(int i=0;i<n;++i)
#define fa(i,a,n) for(int i=(a);i<=(n);++i)
#define  c(vec) for(auto &x:vec)cin>>x;
#define ff(vec) for(auto &x:vec)cout<<x<<' ' ;cout<<'\n';
#define fp(vec) for(auto &x:vec)cout<<x.first<<' '<<x.second<<'\n';
#define debug(x) cout<<#x<<":"<<x<<endl;
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define pb push_back
#define sz(a) (int)(a).size()
const long double EPS=1e-7;
const ll MOD1=1e18+7;
int dr[]={-1, -1, -1, 0, 1, 1,  1,  0};
int dc[]={-1,  0,  1, 1, 1, 0, -1, -1};
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

vector<vector<int>>alls;
vector<int>row(9);


bool valid(int row2,int col2){
    for(int col1=1;col1<col2;col1++){
        if(row2==row[col1]||abs(row2-row[col1])== abs(col2-col1))return 0;
    }
    return 1;
}

void solve(int col){
    if(col>8){
        alls.push_back(row);
        return;
    }

    for(int r=1;r<=8;r++){
        if(valid(r,col)){
            row[col]=r;
            solve(col+1);
        }
    }

}


signed  main(){
    //FAST
    //freopen("game.in","rt",stdin);
    //freopen("game.out","wt",stdout);

    solve(1);

    vector<int>pos(9);
    int tc=1;
    while(cin>>pos[1]){
        for(int i=2;i<=8;i++)cin>>pos[i];

        int mn=INT_MAX;
        for(int i=0;i<alls.size();i++){
            int cnt=0;
            for(int j=1;j<=8;j++){
                if(pos[j]!=alls[i][j])cnt++;
            }
            mn=min(mn,cnt);
        }
        cout<<"Case "<<tc++<<": "<<mn<<'\n';
    }



    return 0;
}