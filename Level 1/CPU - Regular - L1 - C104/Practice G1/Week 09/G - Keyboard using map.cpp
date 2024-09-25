#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS(){
    vector<string>keyboard = {
            "qwertyuiop",
            "asdfghjkl;",
            "zxcvbnm,./"};
    map<char, char>mpR, mpL;
    for(int i=0;i<3;i++){
        for(int j=1;j<keyboard[i].size();j++) mpR[keyboard[i][j]]=keyboard[i][j-1];
        for(int j=0;j<(int)keyboard[i].size()-1;j++) mpL[keyboard[i][j]]=keyboard[i][j+1];
    }
    char cc;
    cin>>cc;
    string s;
    cin>>s;
    if(cc=='R') for(char c:s) cout<<mpR[c];
    else for(char c:s) cout<<mpL[c];
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
