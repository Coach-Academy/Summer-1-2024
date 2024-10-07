#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
int solve(int curLoad, int truckSize){
    if(curLoad<=truckSize) return 1;
    return solve(curLoad/2, truckSize) + solve(curLoad-curLoad/2, truckSize);
}
void TT(){
    int n, w;
    while(cin>>n>>w){
        cout<<solve(n, w)<<'\n';
    }
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST
    int testCases = 1;
//    cin >> testCases;
    while (testCases--) TT();
    return 0;
}