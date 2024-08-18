#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



signed  main(){
    FAST
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int idxmx,mx=0,idxmn,mn=200;

    for(int i=0;i<n;i++){
        if(mx<arr[i]){
            mx=arr[i];
            idxmx=i;
        }
        if(mn>=arr[i]){
            mn=arr[i];
            idxmn=i;
        }
    }
    int ans=idxmx+(n-1-idxmn);
    if(idxmx>idxmn)ans--;
    cout<<ans<<'\n';



    return 0;
}
