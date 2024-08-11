#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);




signed  main(){
    FAST
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++){
        int a1,a2,a3;
        cin>>a1>>a2>>a3;
        if(a1+a2+a3>=2)cnt++;
    }
    cout<<cnt<<'\n';

    return 0;
}