#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, ans = 0 , cur = 0;
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        ans = max(ans, cur);
        cur -=a;
        cur += b;
    }
    cout << ans << '\n';
    return 0;
}