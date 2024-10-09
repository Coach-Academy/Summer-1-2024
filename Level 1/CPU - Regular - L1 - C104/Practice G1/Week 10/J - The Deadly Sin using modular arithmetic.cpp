#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
int rec(int x, int y){
    if(x==y || !x || !y) return x+y;
    if(x<y) return rec(x, (y%x? y%x:x));
    return rec((x%y? x%y:y), y);
}
void TT(){
    int x, y;
    cin>>x>>y;
    cout<<rec(x, y)<<'\n';
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST
    int testCases = 1;
    cin >> testCases;
    while (testCases--) TT();
    return 0;
}