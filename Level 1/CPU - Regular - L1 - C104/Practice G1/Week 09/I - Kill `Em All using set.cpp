#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
void SS(){
    int n, r;
    cin>>n>>r;
    set<int>st;
    while(n--){
        int x;
        cin>>x;
        st.insert(x);
    }
    int shifts=0, cnt=0;
    set<int>::reverse_iterator it = st.rbegin();
    while(it!=st.rend()){
        if(shifts>=*it) break;  // the monster is already killed by a trap due to explosions
        // I still need to throw missiles
        it++;
        cnt++;
        shifts+=r;
    }
    cout<<cnt<<'\n';
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
