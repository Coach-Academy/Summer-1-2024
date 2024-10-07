#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
typedef long long ll;

vector<int>lucky;
void generateLuckies(ll curLucky){
    if(curLucky>1e9) return;
    if(curLucky!=0) lucky.push_back(curLucky);
    generateLuckies(curLucky*10+4);
    generateLuckies(curLucky*10+7);
}
void TT(){
    int n;
    cin>>n;
    sort(lucky.begin(), lucky.end());
    // 4 7 44 47 74 77 444 447 ...
    for(int i=0;i<lucky.size();i++)
        if(lucky[i]==n)
            cout<<i+1<<'\n';
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    FAST
    generateLuckies(0);
    int testCases = 1;
//    cin >> testCases;
    while (testCases--) TT();
    return 0;
}
