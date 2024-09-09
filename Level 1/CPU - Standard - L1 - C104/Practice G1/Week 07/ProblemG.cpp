#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1);
#define ll long long
int main()
{

   string s;
   cin >> s;
   sort (s.begin () , s.end());

   for (int i=0;i<s.size();i++){
      if (s[i] == '+')
        continue;
      cout << s[i] ;
      if (i < s.size() - 1)
      cout << "+";
   }
}
