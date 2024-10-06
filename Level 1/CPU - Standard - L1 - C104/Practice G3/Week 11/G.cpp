#include <bits/stdc++.h>
using namespace std;

string s;
bool solve(int i){
    if(i%2==0 && isupper(s[i])) return false;
    if(i%2!=0 && islower(s[i])) return false;
    if(i<0) return true;
    return solve(i-1);
}
int main()
{
    cin>>s;
    cout<<(solve(s.size()-1) ? "Yes" : "No");
    return 0;
}
