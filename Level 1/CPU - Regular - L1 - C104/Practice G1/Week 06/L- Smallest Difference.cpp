#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS(){
    int n;
    cin>>n;
    int arr[n], freq[10009]={};
    for(int i=0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    int ans=0;
    for(int i=1;i<1e4;i++)
        ans = max(ans, freq[i]+freq[i+1]);
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
