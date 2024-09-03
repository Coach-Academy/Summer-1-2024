#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    string s, t;
    cin>>s>>t;
    reverse(s.begin(), s.end());
    cout<<(s==t?"YES\n":"NO\n");
    return 0;
}
