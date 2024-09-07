#include <bits/stdc++.h>

using namespace std;
const int N = 105;
int arr[N];
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,d;
        cin >> n >> d;
        for(int i =0;i<n;i++) // n
            cin >> arr[i];
        sort(arr,arr+n); // n log n
        cout << ((arr[0] + arr[1] <= d || arr[n-1] <=d) ? "YES" : "NO") << '\n'; // O(nlogn
    }
    return 0;
}