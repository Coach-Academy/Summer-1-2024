#include <bits/stdc++.h>

using namespace std;
 #define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >>n;
    long long sum =0;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    while(n--){
        long long x;
        cin >> x;
        sum += x;
        pq.push(x);
        while(sum < 0 ){
            sum -= pq.top();
            pq.pop();
        }
    }
    cout << (int)pq.size() << endl;
    return 0;
}