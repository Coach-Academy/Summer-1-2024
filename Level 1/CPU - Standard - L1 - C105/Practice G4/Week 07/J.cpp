#include <bits/stdc++.h>

using namespace std;
const int N = 1e5+5;
int arr[N];
int main(){
    int n;
    cin >> n;
    long long sum =0,x;
    for(int i=0;i<n;i++){ // n
        cin >> arr[i];
        sum += arr[i];
    }
    cin >> x;
    long long rep = x/sum; // how many sum in x
    sum *= rep; // sum to number;
    long long idx = rep * n; // index of rep sum where every n array repeats
    for(int i=0;i<n;i++){
        if(sum > x)
            break;
        sum += arr[i];
        idx++;
    }
    cout << idx << '\n'; // O(n)
    return 0;
}