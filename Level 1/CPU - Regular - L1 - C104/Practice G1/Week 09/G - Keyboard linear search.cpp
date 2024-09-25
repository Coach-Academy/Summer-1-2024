#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s,a="qwertyuiopasdfghjkl;zxcvbnm,./";
char c;
int main(){
    cin>>c>>s;
    for(char i : s)
        for(int j=0;j<=a.size();j++)
            if(i==a[j]){
                if(c=='R') cout<<a[j-1];
                else cout<<a[j+1];
                break;
            }
    return 0;
}