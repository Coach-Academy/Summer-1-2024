#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;


signed  main(){
    FAST
    int arr[4];
    for(int i=0;i<4;i++)cin>>arr[i];
    sort(arr,arr+4);

    int cnt=0;
    for(int i=0;i<3;i++)if(arr[i]==arr[i+1])cnt++;

    cout<<cnt<<'\n';
    return 0;
}