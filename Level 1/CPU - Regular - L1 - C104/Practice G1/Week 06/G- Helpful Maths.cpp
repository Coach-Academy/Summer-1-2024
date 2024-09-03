#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS(){
    string s;
    cin>>s;
    string t;
    for(char c:s)
        if(c!='+')
            t+=c;
    std::sort(t.begin(), t.end());
    cout<<t[0];
    for(int i=1;i<(int)t.size();i++)
        cout<<"+"<<t[i];
    cout<<'\n';
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
