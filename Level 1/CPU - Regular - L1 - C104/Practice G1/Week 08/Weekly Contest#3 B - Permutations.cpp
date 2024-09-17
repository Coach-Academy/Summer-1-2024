#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS(){
    int n;
    cin>>n;
    vector<int>a(n), b(n);
    for(int &i:a) cin>>i;
    for(int &i:b) cin>>i;
    int i_a=0;
    for(int i_b=0;i_b<n;i_b++)
        if(a[i_a]==b[i_b])
            i_a++;
    cout<<n-i_a<<'\n';
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
