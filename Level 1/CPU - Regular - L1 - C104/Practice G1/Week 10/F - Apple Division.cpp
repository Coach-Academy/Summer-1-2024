#include <bits/stdc++.h>
using namespace std;
long long solve(long long sum1, long long sum2, int i, vector<int>&arr){
    if(i==arr.size()) return abs(sum1-sum2);
    return min(solve(arr[i]+sum1, sum2, i+1, arr),
               solve(sum1, arr[i]+sum2, i+1, arr));
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int &i:arr) cin>>i;
    cout<<solve(0, 0, 0, arr);
    return 0;
}
