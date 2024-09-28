#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    char d;
    cin >> d;
    string s, alp = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> s;
    map<char,char> left,right;
    for(int i = 1;i < alp.size()-1;i++){
        left[alp[i]] = alp[i+1];
        right[alp[i]] = alp[i-1];
    }
    left['q'] = 'w';
    right['/'] = '.';
    if(d == 'L')
        for(auto c : s)
            cout << left[c];
    else
        for(auto c : s)
            cout << right[c];
    return 0;
}