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
        for(int i=0;i<s.length();i+=2)cout<<s[i];

        cout<<s.back()<<'\n';
    }

    return 0;
}