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
const long double EPS=1e-6;
const ll MOD1=1e18+7;
int dr[]={-1, -1, -1, 0, 1, 1,  1,  0};
int dc[]={-1,  0,  1, 1, 1, 0, -1, -1};
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

bool solve(double m,vector<int>&pos){
    double st=pos[0]+m*2;
    int cnt=1;
    for(int i=1;i<pos.size();i++){
        if(pos[i]>st){
            st=pos[i]+m*2;
            cnt++;
        }
    }
    return cnt<=3;
}

signed  main(){
    FAST
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);
    int n;
    cin>>n;
    vector<int>pos(n);
    for(int i=0;i<n;i++)cin>>pos[i];
    sort(pos.begin(),pos.end());
    double l=0,r=1e9+5;
    while(r-l>=EPS){
        double m=(r+l)/2;
        if(solve(m,pos)){
            r=m;
        }
        else l=m;
    }

    cout<<fixed<<setprecision(6)<<r<<'\n';
    double st=pos[0]+r;
    cout<<st<<' ';
    st+=r;
    int cnt=1;
    for(int i=1;i<pos.size();i++){
        if(pos[i]>st){
            st=pos[i]+r;
            cout<<st<<' ';
            st+=r;
            cnt++;
        }
    }
    for(int i=cnt;i<3;i++)cout<<pos[0]<<' ';

    cout<<'\n';

    return 0;
}