#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS(){
    int n, d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr, arr+n);
    if(arr[0]+arr[1]<=d || arr[n-1]<=d) cout<<"YES\n";
    else cout<<"NO\n";
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
