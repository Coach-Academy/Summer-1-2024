#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;


signed  main(){
    FAST
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int mn=arr[0],mx=arr[0];
    int cnt=0;
    for(int i=1;i<n;i++){
        if(arr[i]>mx)cnt++,mx=arr[i];

        if(arr[i]<mn)cnt++,mn=arr[i];
    }
    cout<<cnt<<'\n';
    return 0;
}