#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void prnt(vector<int>&arr){
    cout<<arr.size()<<' ';
    for(auto x:arr) cout<<x<<" ";
    cout<<'\n';
}
void SS(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr, arr+n);
    vector<int>neg, pos, zero;
    neg.push_back(arr[0]);
    if(arr[n-1]>0){ // I have at least one positive number
        pos.push_back(arr[n-1]);
        for(int i=1;i<n-1;i++) zero.push_back(arr[i]);
    }
    else{           // I will have the product of two negative nums -> pos product
        pos.push_back(arr[1]), pos.push_back(arr[2]);
        for(int i=3;i<n;i++) zero.push_back(arr[i]);
    }
    prnt(neg);
    prnt(pos);
    prnt(zero);
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    FIO
    int test = 1;
//    cin >> test;
    while (test--) SS();
    return 0;
}
