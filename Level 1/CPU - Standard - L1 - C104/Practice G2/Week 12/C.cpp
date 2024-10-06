#include <bits/stdc++.h>
using namespace std;

long long Super_Digit(string s){
    if(s.size()==1) return (s[0]-'0'); // base Case
    long long sum = 0;
    for(char c : s) sum+=(c-'0');
    string ss = to_string(sum);
    return Super_Digit(ss);
}
int main()
{
    string n;
    long long k;
    cin>>n>>k;
    long long p = 0;
    for(char c : n) p+=(c - '0');
    string m = to_string(p*k);
    cout<<Super_Digit(m);
    return 0;
}
