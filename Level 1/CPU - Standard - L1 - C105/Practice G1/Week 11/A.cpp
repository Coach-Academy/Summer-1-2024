#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
int fib(int n){
    if(n ==0 or n == 1)
        return n;
    return fib(n-1) + fib(n-2);
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}