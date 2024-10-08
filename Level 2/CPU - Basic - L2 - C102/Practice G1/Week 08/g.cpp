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

int n;

void solve(int i,string rule,string ans,string word){
    if(i==rule.size()){
        cout<<ans<<'\n';
        return;
    }
    if(rule[i]=='#'){
        solve(i+1,rule,ans+word,word);
    }
    else{
        for(char ch='0';ch<='9';ch++){
            solve(i+1,rule,ans+ch,word);
        }
    }

}

signed  main(){
    //FAST
    //freopen("game.in","rt",stdin);
    //freopen("game.out","wt",stdout);
    while(cin>>n){
        vector<string>dir(n);
        for(int i=0;i<n;i++)cin>>dir[i];

        int m;
        cin>>m;
        while(m--){
            string s;
            cin>>s;
            cout<<"--\n";
            for(int i=0;i<n;i++){
                solve(0,s,"",dir[i]);
            }

        }


    }


    return 0;
}