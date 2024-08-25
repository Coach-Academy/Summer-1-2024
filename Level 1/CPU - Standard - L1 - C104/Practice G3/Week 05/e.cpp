#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


signed  main(){
    FAST
    string s;
    getline(cin,s);
    int arr[26]={0};
    for(int i=1;i<s.length();i+=3)arr[s[i]-'a']=1;

    int cnt=0;
    for(int i=0;i<26;i++)
        cnt+=arr[i];

    cout<<cnt<<'\n';



    return 0;
}