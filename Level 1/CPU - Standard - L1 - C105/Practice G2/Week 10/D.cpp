#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    char d;
    cin >> d;
    string s, key = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >>s ;
    map<char,char> left,right;
    for(int i = 1;i < key.size() - 1 ;i++){
        left[key[i]] = key[i+1];
        right[key[i]] = key[i-1];
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