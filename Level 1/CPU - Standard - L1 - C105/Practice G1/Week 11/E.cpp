#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
bool solve(int i , vector<int> &x,vector<int>&y,int s,int d){
    if(i == x.size())
        return false;
    bool res = x[i] < s and y[i] > d;
    res |= solve(i+1,x,y,s,d);
    return res;
}
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n,s,d;
    cin >> n  >> s >> d;
    vector<int>x(n),y(n);
    for(int i =0;i<n;i++)
        cin >> x[i] >> y[i];
    cout << (solve(0,x,y,s,d) ? "Yes" : "No") << endl;
    return 0;
}