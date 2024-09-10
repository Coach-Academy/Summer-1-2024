#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void TT(){
    int n, ans=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            int j = i+1;
            while(j<n && s[j]=='P') j++;
            ans = max(ans, j-i-1);
            i = j-1;
        }
    }
    cout<<ans<<'\n';
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) TT();
    return 0;
}
