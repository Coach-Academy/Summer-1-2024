#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


signed  main(){
    FAST
    int n,k;
    cin>>n>>k;
    int cnt=0;
    while(n--){
        string s;
        cin>>s;
        int arr[10]={0};
        for(int i=0;i<s.length();i++){
            arr[s[i]-'0']=1;
        }

        bool flag=1;
        for(int i=0;i<=k;i++){
            if(arr[i]==0){
                flag=0;
                break;
            }
        }
        cnt+=flag;
    }
    cout<<cnt<<'\n';
    return 0;
}