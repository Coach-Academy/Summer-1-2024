#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;


signed  main(){
    FAST
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++)cin>>arr[i];

    sort(arr,arr+m);

    int mn=2000;
    for(int i=0;i+n-1<m;i++){
        mn=min(mn,arr[i+n-1]-arr[i]);
    }
    cout<<mn<<'\n';
    return 0;
}