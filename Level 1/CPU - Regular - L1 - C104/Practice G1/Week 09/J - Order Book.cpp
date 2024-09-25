#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS(){
    int n, s;
    cin>>n>>s;
    map<int, int>B, S;
    // gather same orders in aggregated ones
    while(n--){
        char d;
        int p, q;
        cin>>d>>p>>q;
        if(d == 'S') S[p]+=q;
        else B[-p]+=q;
    }
    // printing the best s Sell agg orders
    int cnt=0;
    vector<string>temp;
    for(auto [k, v]:S){
        if(cnt==s) break;
        temp.push_back("S "+to_string(k)+" "+ to_string(v));
        cnt++;
    }
    while(temp.empty()==false) cout<<temp.back()<<"\n", temp.pop_back();
    // printing the best s Buy agg orders
    cnt=0;
    for(auto [k, v]:B){
        if(cnt==s) break;
        cout<<"B "<<-k<<" "<<v<<'\n';
        cnt++;
    }
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