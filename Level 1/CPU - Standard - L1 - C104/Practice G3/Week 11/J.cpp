#include <bits/stdc++.h>
using namespace std;

string s;
string solve(int i){
    if(i==0) return s;
    if(s[i]=='.') return s.substr(0, i);
    return solve(i-1);
}
int main()
{
    cin>>s;
    cout<<solve(s.size()-1);
    return 0;
}
