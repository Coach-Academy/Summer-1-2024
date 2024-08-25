#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


signed  main(){
    FAST

    int n;
    cin>>n;
    int arr[26]={0};
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        s[i]= tolower(s[i]);
        arr[s[i]-'a']=1;
    }

    bool flag=1;
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            flag=0;
            break;
        }
    }

    if(flag){// flag!=0
        cout<<"YES\n";
    }
    else cout<<"NO\n";
    return 0;
}