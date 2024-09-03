#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;


signed  main(){
    FAST
    int n,m;
    cin>>n>>m;
    int arr[n];
    long long sum=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        sum+=a;
        arr[i]=a-b;
    }
    sort(arr,arr+n);
    int cnt=0;
    for(int i=n-1;i>=0&&sum>m;i--){
        sum-=arr[i];
        cnt++;
    }

    if(sum<=m)cout<<cnt<<'\n';
    else cout<<"-1\n";
    return 0;
}