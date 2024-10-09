#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
int x;
int solve(int i, int curSum, vector<int>&vals){
    if(curSum>x) return 0;                      // backtracking condition
    if(i==vals.size()) return curSum==x;        // base case
    return solve(i+1, curSum+vals[i], vals) + solve(i+1, curSum, vals);
}
void TT(){
    int n;
    cin>>x>>n;
    vector<int>vals;
    int i=1;
    while(pow(i, n)<=x) vals.push_back(pow(i, n)), i++;
    cout<<solve(0, 0, vals);
}
int main() {
    FAST
    int testCases = 1;
//    cin >> testCases;
    while (testCases--) TT();
    return 0;
}