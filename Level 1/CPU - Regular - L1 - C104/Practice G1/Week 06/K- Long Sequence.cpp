#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS(){
    int n;
    cin>>n;
    int arr[n];
    ll realSum = 0, x, q, numberElements, sum;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        realSum+=arr[i];
    }
    cin>>x;
    q = x/realSum;
    numberElements= q*n, sum= q*realSum;
    for(int i = 0;i<n;i++){     // O(n)
        sum+=arr[i];
        numberElements++;
        if(sum>x) break;
    }
    cout<<numberElements<<'\n';
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    FIO
    int test = 1;
//    cin >> test;
    while (test--) SS();
    return 0;
}
