#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


signed  main(){
    FAST
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        cout<<(s.length()<=10?s:(s.front()+to_string(s.length()-2)+s.back()))<<'\n';

    }

    return 0;
}