
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cctype>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <sstream>
#include <iterator>
#include <map>
#include <unordered_set>
#include <bitset>
#include <utility>
#include <iomanip>
#include <bits/stdc++.h>
#define ll long long

#define FAST                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
long long const inf=1e18;
int calc(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}


int main() {
     FAST
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        bool valid=true;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            bool div=false;
            for(int j=i+1;j>=2;j--){
                if(x%j!=0){
                    div= true;
                    break;
                }
            }
            valid=div&&valid;

        }
        if(valid)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}