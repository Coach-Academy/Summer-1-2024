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
vector<ll>ing(3),cost(3);
map<char,ll>mp;
ll p;
bool solve(ll m){
    ll ans=0;
    ans+=max(0ll,((mp['B']*m)-ing[0])*cost[0]);
    ans+=max(0ll,((mp['S']*m)-ing[1])*cost[1]);
    ans+=max(0ll,((mp['C']*m)-ing[2])*cost[2]);
    return ans<=p;
}

signed  main(){
    FAST
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);
    string s;
    cin>>s;
    for(int i=0;i<3;i++)cin>>ing[i];
    for(int i=0;i<3;i++)cin>>cost[i];
    for(int i=0;i<s.length();i++)mp[s[i]]++;
    cin>>p;
    ll l=0,r=1e13+3;
    ll val;
    while(l<=r){
        ll m=(l+r)/2;
        if(solve(m)){
            l=m+1;
            val=m;
        }
        else r=m-1;
    }
    cout<<val<<'\n';


    return 0;
}