#include <bits/stdc++.h>
using namespace std ;
int main () {
    int a , b;
    cin >> a >> b;
    int plus = a+b;
    int minus = a - b;
    int mul = a*b;
    if (mul >= plus && mul >= minus)
        cout << mul ;
    else if (minus >= plus && minus >= mul)
        cout << minus;
    else cout << plus ;
}

