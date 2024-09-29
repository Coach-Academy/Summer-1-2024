#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int sum(int leftElements){
    if(leftElements==0) return 0;
    int x;
    cin>>x;
    return x+sum(leftElements-1);
}
int cnt;
void SS(){
    cout<<"Case "<<++cnt<<": ";
    int n;
    cin>>n;
    cout<<sum(n)<<'\n';
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    FIO
    int test = 1;
    cin >> test;
    while (test--) SS();
    return 0;
}
