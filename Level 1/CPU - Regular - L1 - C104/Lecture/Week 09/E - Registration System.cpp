#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS() {
    map<string, int>freq;
    int n;
    cin>>n;
    while(n--){
        string name;
        cin>>name;
        if(freq[name]==0) cout<<"OK\n";
        else cout<<name<<freq[name]<<'\n';
        freq[name]++;
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
