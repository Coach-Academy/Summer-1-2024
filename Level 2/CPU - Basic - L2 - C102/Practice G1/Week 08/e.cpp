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
vector<int>primes={2,3,5,7,11,13,17,19,23,29,31};
vector<int>vis(17),ans(17);

void solve(int i){
    if(i==n){
        if(find(primes.begin(),primes.end(),(ans[0]+ans[n-1]))!=primes.end()){
            for(int j=0;j<n;j++)cout<<ans[j]<<" \n"[j==n-1];
        }
        return;
    }

    for(int j=0;j<primes.size();j++){
        int x=primes[j]-ans[i-1];
        if(x>n)break;
        if(vis[x]==1||x<1)continue;
        ans[i]=x;
        vis[x]=1;
        solve(i+1);
        vis[x]=0;
    }
}

signed  main(){
    //FAST
    //freopen("game.in","rt",stdin);
    //freopen("game.out","wt",stdout);
    ans[0]=1;
    vis[1]=1;
    int tc=1;
    while(cin>>n) {
        if(tc!=1)cout<<'\n';
        cout<<"Case "<<tc++<<":\n";
        solve(1);
    }


    return 0;
}