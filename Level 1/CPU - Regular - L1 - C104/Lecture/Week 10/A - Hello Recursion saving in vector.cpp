#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int sum(int i, vector<int>&arr){
    if(i==arr.size()) return 0;
    return arr[i]+sum(i+1, arr);
}
int cnt;
void SS(){
    cout<<"Case "<<++cnt<<": ";
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int &i:arr) cin>>i;
    cout<<sum(0, arr)<<'\n';
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
