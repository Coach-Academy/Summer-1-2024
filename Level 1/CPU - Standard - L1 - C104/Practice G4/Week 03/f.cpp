#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);




signed  main(){
    FAST
    int a,b;
    cin>>a>>b;
    int cnt=0;

    while(a<=b){
        a*=3;
        b*=2;
        cnt++;
    }
    cout<<cnt<<'\n';


    return 0;
}