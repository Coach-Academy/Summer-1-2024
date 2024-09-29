#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
ll super_digit(string &num){
    if(num.size()==1) return stoll(num);
    ll temp=0;
    for(char c:num) temp+=(c-'0');
    string s = to_string(temp);
    return super_digit(s);
}
void SS(){
    string s;
    ll k;
    cin>>s>>k;
    ll p = 0;
    for(char c:s) p+=(c-'0');
    s= to_string(p*k);
    cout<<super_digit(s)<<'\n';
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    FIO
    int test = 1;
//    cin >> test;
    while (test--) SS();
    return 0;
}
