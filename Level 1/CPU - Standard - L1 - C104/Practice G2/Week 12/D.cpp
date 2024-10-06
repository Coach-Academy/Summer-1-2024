#include <bits/stdc++.h>
using namespace std;

int solve(int n, int m){
    if(n<=m) return 1;
    return solve(n/2, m) + solve((n+1)/2, m);
}
int main()
{
    int n, m;
    while(cin>>n>>m){
        cout<<solve(n, m)<<'\n';
    }
    return 0;
}
