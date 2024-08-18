#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



signed  main(){
    FAST
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];

        int mn=arr[n-1];
        for(int i=n-2;i>=0;i--){
            if(arr[i]>mn)cnt++;
            else mn=arr[i];
        }
        cout<<cnt<<'\n';

    }
    return 0;
}
