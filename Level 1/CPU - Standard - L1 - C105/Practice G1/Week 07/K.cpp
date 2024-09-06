#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    bool flag = true;
    while(n--){ // n
        int a ,b;
         cin >> a >> b;
         if(a == x || 7-a == x || b == x || 7-b == x){
             flag = false;
             break;
         }
    }
    cout << (flag ? "YES" : "NO") << '\n';
    return 0;
}