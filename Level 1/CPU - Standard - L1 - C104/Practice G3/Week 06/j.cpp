#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;


signed  main(){
    FAST
    int n;
    cin>>n;
    int arr[n],a[n],b[n],idxa,idxb;
    for(int i=0;i<n;i++)arr[i]=i+1; // 1 2 3
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int idx=1;
    do{
        bool flag=1;
        for(int i=0;i<n;i++){
            if(arr[i]!=a[i]){
                flag=0;
            }
        }
        if(flag)idxa=idx;

        flag=1;
        for(int i=0;i<n;i++){
            if(arr[i]!=b[i]){
                flag=0;
            }
        }
        if(flag)idxb=idx;

        idx++;
    }while(next_permutation(arr,arr+n));

    cout<<abs(idxa-idxb)<<'\n';

    return 0;
}