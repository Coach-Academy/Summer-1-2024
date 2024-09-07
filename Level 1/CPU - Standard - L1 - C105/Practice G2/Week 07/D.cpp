#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    cout << (n %2 == 0 ? n/2 : -(n+1) /2) << '\n'; // O(1)
    return 0;
}