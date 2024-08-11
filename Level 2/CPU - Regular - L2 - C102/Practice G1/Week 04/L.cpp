//cp.exe
//g++ cp.cpp -o cp
//gcc cp.cpp -o cp.exe -lstdc++ ---how to link to standard template library
/*==============================================  KHALWSH  ==============================================*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#define int long long
#define double long double
#define line '\n'
#define khaled ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace __gnu_pbds;
using namespace std;
template<typename T>
using ordered_set=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
bool valid(long long i,long long j,long long n,long long m){return i>=0&&i<n&&j>=0&&j<m;}
long long mul(long long x,long long y,const long long&mod){return ((x%mod)*(y%mod))%mod;}
long long add(long long x,long long y,const long long&mod){return (((x%mod)+(y%mod))%mod+mod)%mod;}
int SafeMul(int a,int b,int m){if(b==0)return 0;int res = SafeMul(a,b/2,m);res = add(res,res,m);if(b&1)return add(res,a,m);else return res;}
long long fast_power(long long base,long long power,const long long &m=INT64_MAX){if (power == 1 || power == 0)return base * power + (!power);long long res = (fast_power(base, power / 2, m) % m) % m;if (power & 1)return mul(base,mul(res,res,m),m);else return mul(res,res,m);}
int log2_floor(long long i) {return i ? __builtin_clzll(1) - __builtin_clzll(i) : 0;}
int power_of_2(int n){ return __builtin_popcountll(n)==1;}
bool line_checking(int a1,int b1,int a2,int b2,int a3,int b3) { return (b2-b1)*(a2-a3)==(b2-b3)*(a2-a1); }
pair<int,int> rotate(int i,int j,int n){ return make_pair(j,n-1-i); }
const int N = 2e5+5;
const int mod=1e9+7;
//const int MOD = 998244353;
const long long inf=3e18+100;
int dx[]{1,-1,0,0,1,1,-1,-1};
int dy[]{0,0,1,-1,1,-1,1,-1};
const double pi=3.14159265350979323846,eps=1e-10;
/*==============================================  KHALWSH  ==============================================*/
int PrefSum[N] ,PrefMax[N] , PrefMin[N] , SufMin[N] , SufMax[N];
int query_sum(int l,int r){
	 return PrefSum[r] - (l == 0 ? 0 : PrefSum[l-1]);
}
signed main() {
    khaled
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		string s;cin>>s;
		for(int i=0;i<n;i++){
			if(s[i] == '+')PrefSum[i] = 1;
			else PrefSum[i] = -1;
			if(i) PrefSum[i] += PrefSum[i-1];
			PrefMax[i] = PrefSum[i];
			PrefMin[i] = PrefSum[i];
			SufMin[i]  = PrefSum[i];
			SufMax[i]  = PrefSum[i];
			if(i) PrefMax[i] = max(PrefMax[i] , PrefMax[i - 1]);
			if(i) PrefMin[i] = min(PrefMin[i] , PrefMin[i - 1]);
		}
		for(int i=n - 2;i>=0;i--){
			SufMax[i] = max(SufMax[i] , SufMax[i + 1]);
			SufMin[i] = min(SufMin[i] , SufMin[i + 1]);
		}
		while(m--){
			int l , r;
			cin>>l>>r;
			l--,r--;
			int pref_mx = (l - 1 < 0 ? 0 : max(0ll,PrefMax[l-1]));
			int pref_mn = (l - 1 < 0 ? 0 : min(0ll,PrefMin[l-1]));
			int suf_mx = (r + 1 == n ? 0 : max(0ll,SufMax[r + 1] - query_sum(l , r)));
			int suf_mn = (r + 1 == n ? 0 : min(0ll,SufMin[r + 1] - query_sum(l , r)));
			cout<<max(pref_mx , suf_mx) - min(pref_mn , suf_mn) + 1<<line;
		}
	}
}