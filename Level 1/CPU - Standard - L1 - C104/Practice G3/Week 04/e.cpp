#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



signed  main(){
    FAST
    int n;
    cin>>n;
    int cnt=1;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1])cnt++;
    }
    cout<<cnt<<'\n';

    return 0;
}
