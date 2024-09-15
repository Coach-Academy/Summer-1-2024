#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int res =0;
    while(n--){
        string s;
        cin >> s;
        bool arr[10] = {0};
        for(int i= 0; i< s.size();i++)
            arr[s[i] - '0'] = true;
        bool flag = true;
        for(int i =0;i<=k;i++){
            if(!arr[i]){
                flag = false;
                break;
            }
        }
        if(flag) res++;
    }
    cout << res << '\n';
    return 0;
}
