#include <bits/stdc++.h>
using namespace std ;
int main () {
   int month , day ;
   cin >> month >> day ;
   if (day < month)
       cout << month - 1;
   else cout << month;

}

