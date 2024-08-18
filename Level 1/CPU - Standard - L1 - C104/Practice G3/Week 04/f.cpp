#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



signed  main(){
    FAST
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],b[n];

        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];

        sort(a,a+n);
        sort(b,b+n);
        int i=0,j=n-1;
        while(k--){
            if(b[j]>a[i])a[i]=b[j];
            else break;
            j--,i++;
        }
        int sum=0;
        for(int i=0;i<n;i++)sum+=a[i];
        cout<<sum<<'\n';


    }


    return 0;
}
