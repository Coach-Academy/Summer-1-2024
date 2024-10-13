
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
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>>vals;
        vals.push_back({n-1,1,n-1});
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                if ((n%i==0)&&((n-i)%i==0))
                    vals.push_back({lcm(i,n-i),i,n-i});
                int secdiv=n/i;
                if((n%secdiv==0)&&((n-secdiv)%secdiv==0))
                    vals.push_back({lcm(secdiv,n-secdiv),secdiv,n-secdiv});
            }
        }
        std::sort(vals.begin(), vals.end());
        cout<<vals.front()[1]<<" "<<vals.front()[2]<<"\n";
    }

}