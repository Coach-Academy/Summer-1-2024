#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;


signed  main(){
    FAST
    int n;
    cin>>n;
    int in=0,mx=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        in-=x;
        in+=y;
        mx=max(mx,in);
    }
    cout<<mx<<'\n';

    return 0;
}