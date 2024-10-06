#include <bits/stdc++.h>
using namespace std;

int N = 100;
int n, s, d;
vector<int>x(N), y(N);

bool solve(int i){
    if(x[i]<s && y[i] > d) return true; //base Case
    if(i==0) return false;
    return solve(i-1) || 0;
}
int main()
{
    cin>>n>>s>>d;
    for(int i = 0 ; i < n ; i++){
        cin>>x[i]>>y[i];
    }
    cout<<(solve(n-1) ? "Yes" : "No");
    return 0;
}
