#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
int N;
int calc(int n){
    return n * (n+1) /2;
}

int solve(int day){
    if(calc(day) >= N)
        return day;
    return solve(day + 1);
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    cin >>N;
    cout << solve(0) << '\n';
    return 0;
}