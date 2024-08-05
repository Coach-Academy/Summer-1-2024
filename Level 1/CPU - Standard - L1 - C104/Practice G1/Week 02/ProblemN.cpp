#include <bits/stdc++.h>
using namespace std ;
int main () {
  char a , b ,c;
  cin >> a >> b >> c;
  if (a=='R' && b=='R' && c=='R')
      cout << 3;
  else if ((a=='R' && b=='R') || (b=='R' && c=='R'))
      cout << 2;
  else if (a=='R' || b=='R' || c=='R')
      cout << 1;
  else cout << 0;


}

