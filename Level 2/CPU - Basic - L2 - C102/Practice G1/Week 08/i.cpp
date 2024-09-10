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

vector<vector<int>>allS;
vector<int>row(9);


bool valid(int row2,int col2){
    for(int col1=1;col1<col2;col1++){
        if(row[col1]==row2||abs(row[col1]-row2)==abs(col2-col1))return 0;
    }
    return 1;
}

void queens(int col){
    if(col>8){
        allS.push_back(row);
        return;
    }

    for(int r=1;r<=8;r++){
        if(valid(r,col)){
            row[col]=r;
            queens(col+1);
        }
    }

}

signed  main(){
    FAST
    //freopen("game.in","rt",stdin);
    //freopen("game.out","wt",stdout);
    int t;
    cin>>t;
    queens(1);
    while(t--){
        vector<vector<int>>vec(9,vector<int>(9));
        for(int i=1;i<=8;i++)
            for(int j=1;j<=8;j++)cin>>vec[i][j];


        ll sum=0,mx=0;

        for(int i=0;i<allS.size();i++){
            sum=0;
            for(int col=1;col<=8;col++){
                sum+=vec[allS[i][col]][col];
            }
            mx=max(mx,sum);
        }
        cout<<setw(5)<<mx<<'\n';



    }


    return 0;
}