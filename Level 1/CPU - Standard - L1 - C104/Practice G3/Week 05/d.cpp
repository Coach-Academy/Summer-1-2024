#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


signed  main(){
    FAST
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i+1<n;i++)
        cnt+=(s[i+1]==s[i]);

    cout<<cnt<<'\n';


    return 0;
}