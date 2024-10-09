#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
int solve(int n,int k){
    if(n <= k)
        return 1;
    return solve(n/2,k) + solve(n/2 + n % 2 ,k);
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n,k;
    while(cin >> n >> k)
        cout << solve(n,k) << endl;
    return 0;
}