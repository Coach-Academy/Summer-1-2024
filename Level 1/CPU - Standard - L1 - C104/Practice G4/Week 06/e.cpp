#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;


signed  main(){
    FAST
    int n,k,x;
    cin>>n>>k>>x;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int time=0;
    for(int i=0;i<n;i++){
        if(i<n-k)time+=arr[i];
        else time+=x;
    }
    cout<<time<<'\n';

    return 0;
}