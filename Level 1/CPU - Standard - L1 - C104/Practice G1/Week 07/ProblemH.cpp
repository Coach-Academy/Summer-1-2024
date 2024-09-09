#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1);
#define ll long long
int main()
{

   string s;
   cin >> s;
   while (s.back()=='0')
         s.pop_back();
   string rev = s;
   reverse(s.begin() , s.end());
   if (s == rev)
       cout << "Yes";
   else
    cout << "No";
}
