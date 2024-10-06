#include <bits/stdc++.h>
using namespace std;
int N = 1e5 +5;
int n;
vector<int>a(N), p(N), x(N);

int solve(int i){
    if(i==0) return (x[i]>a[i] ? p[i] : INT_MAX);
    if(x[i]<=a[i]) return solve(i-1);
    return min(p[i], solve(i-1));
}
int main()
{
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>a[i]>>p[i]>>x[i];
    }
    int ans = solve(n-1);
    cout<<(ans == INT_MAX ? -1 : ans);
    return 0;
}
