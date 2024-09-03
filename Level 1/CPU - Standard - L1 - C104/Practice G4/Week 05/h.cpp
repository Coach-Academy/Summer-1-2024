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
        sort(s.begin(),s.end());

        bool flag=1;
        for(int i=1;i<s.length();i++){
            if(s[i]-s[i-1]!=1){
                flag=0;
                break;
            }
        }
        if(flag)cout<<"Yes\n";
        else cout<<"No\n";


    }
    return 0;
}