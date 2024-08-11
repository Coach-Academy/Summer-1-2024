#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);




signed  main(){
    FAST
    int n;
    cin>>n;
    int l=1;
    while((l*(l+1)/2)<=n){
        n-=(l*(l+1))/2;
        l++;
    }
    cout<<l-1<<'\n';


    return 0;
}