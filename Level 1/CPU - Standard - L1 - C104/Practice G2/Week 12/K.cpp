#include <bits/stdc++.h>
using namespace std;

int n;
int solve(int bag, int i){
    if(bag+i>=n) return i;
    return solve(bag+i, i+1);
}
int main()
{
    cin>>n;
    cout<<solve(0, 1);
    return 0;
}
