#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int f(int n){
    int res = 1;
    string s = to_string(n);
    for(auto c : s)
        if(c!= '0')
            res *=( c - '0' );
    return  res;
}

int g(int n ){
    if(n<10)
        return n;
    return g(f(n));
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    return 0;
}