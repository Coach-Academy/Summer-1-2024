#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

const int N=105;
int arr[N];
int n;

int minTime(){
    int ans,idxmx,idxmn,mx=0,mn=200;
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            mx=arr[i];
            idxmx=i;
        }
        if(arr[i]<=mn){
            mn=arr[i];
            idxmn=i;
        }
    }
    ans=idxmx+(n-1-idxmn);
    if(idxmx>idxmn)ans--;
    return ans;
}
signed  main(){
    FAST
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<minTime()<<'\n';


    return 0;
}