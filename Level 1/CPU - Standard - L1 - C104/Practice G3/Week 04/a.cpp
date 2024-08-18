#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



signed  main(){
    FAST
    int n;
    cin>>n;
    int arr[n][n];

    for(int i=0;i<n;i++)arr[0][i]=1;

    for(int i=0;i<n;i++)arr[i][0]=1;

    for(int i=1;i<n;i++)
        for(int j=1;j<n;j++){
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }

    cout<<arr[n-1][n-1]<<'\n';
    return 0;
}
