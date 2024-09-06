#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(),s.end()); // n log n
    while(s.front() == '+') // n^2
        s.erase(s.begin());
    for(int i =0 ;i < s.size(); i++){ // n
        cout << s[i];
        if(i < s.size()-1)
            cout << '+';
    }
    return 0;
}