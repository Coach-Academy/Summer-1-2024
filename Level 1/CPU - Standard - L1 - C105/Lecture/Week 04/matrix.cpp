#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    
    int table[n][n];

    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || j == 0) {
                table[i][j] = 1;
            } else {
                table[i][j] = table[i-1][j] + table[i][j-1];
            }
        }
    }

   
    cout << table[n-1][n-1] << endl;

    return 0 ;
}