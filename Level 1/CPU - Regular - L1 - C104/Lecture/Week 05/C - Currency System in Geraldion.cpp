#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    if(count(arr, arr+n, 1)>0) cout<<"-1\n";
    else cout<<"1\n";       // smallest unfortunate sum
    return 0;
}
