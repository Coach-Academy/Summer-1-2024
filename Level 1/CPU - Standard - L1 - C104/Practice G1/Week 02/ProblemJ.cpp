#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a , b , c;
   cin >> a >> b >> c;
   if (c== 0){ // Takahashi starts
     if (a > b)
        cout << "Takahashi";
     else
        cout << "Aoki";
   }

   else { // Aoki starts
    if (b > a)
        cout << "Aoki";
    else
        cout << "Takahashi";
   }

    return 0;
}
