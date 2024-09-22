#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS() {
    int n, k, ans=0;
    cin>>n>>k;
    // I will do this at most 4 times
    // (due to the fact that the maximum sub array will be of size 3)
    // REASON:
    // this subarray will consist of 2 numbers that are multiple of 2
    // and 1 number that is a multiple of 3
    for(int i=0;i<=k;i++){
        int new_n = n-i;
        if(new_n%3==0) ans=max(ans, new_n/3+i);
        else if(new_n%2==0) ans=max(ans, new_n/2+i);
        else{
            ans=n;
            break;
        }
    }
    cout<<ans<<'\n';
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
