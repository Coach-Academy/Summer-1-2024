#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



signed  main(){
    FAST
    int n;
    cin>>n;
    int years[n];
    for(int i=1;i<n;i++)cin>>years[i];
    int a,b;
    cin>>a>>b;
    int sum=0;
    for(int i=a;i<b;i++)sum+=years[i];
    cout<<sum<<'\n';


    return 0;
}
