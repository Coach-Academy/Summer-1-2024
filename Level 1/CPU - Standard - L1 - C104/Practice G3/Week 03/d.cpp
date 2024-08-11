#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);




signed  main(){
    FAST
    int n;
    cin>>n;
    int x=0;
    while(n--){
        char c1,c2,c3;
        cin>>c1>>c2>>c3;
        if(c2=='+')x++;
        else x--;
    }
    cout<<x<<'\n';


    return 0;
}