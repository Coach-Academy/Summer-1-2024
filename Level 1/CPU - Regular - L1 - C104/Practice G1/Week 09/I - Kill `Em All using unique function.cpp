#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS(){
    int n, r;
    cin>>n>>r;
    vector<int>v(n);
    for(int &i:v) cin>>i;
    std::sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    int shifts=0, cnt=0;
    for(int i=(int)v.size()-1;i>=0;i--){
        if(shifts>=v[i]) break;
        cnt++;
        shifts+=r;
    }
    cout<<cnt<<'\n';
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    FIO
    int test = 1;
    cin >> test;
    while (test--) SS();
    return 0;
}
