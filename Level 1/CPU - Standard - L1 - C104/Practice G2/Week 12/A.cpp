#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1) return n; //base case
    return fib(n-1) + fib(n-2);
}
int main()
{
    int n; cin>>n;
    cout<<fib(n);
    return 0;
}
