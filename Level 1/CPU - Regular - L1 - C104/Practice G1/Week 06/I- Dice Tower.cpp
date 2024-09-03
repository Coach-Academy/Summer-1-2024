#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS(){
    int n;
    cin>>n;
    int top;
    cin>>top;
    for(int i=0;i<n;i++){
        int a, b;
        cin>>a>>b;
        if(a==top || b == top || a == 7-top || b == 7-top)
            return void(cout<<"NO\n");
    }
    cout<<"YES\n";
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
