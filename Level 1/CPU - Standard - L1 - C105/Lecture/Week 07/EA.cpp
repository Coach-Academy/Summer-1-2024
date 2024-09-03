#include <bits/stdc++.h>

using namespace std;
// time n^2
// space n^2
int main(){
    int n;
    cin >> n;

    int arr[n][n]; // n^2
    int ar[n]; // n
    for(int i =0;i<n;i++){ // n^2
        for(int j =0;j<n;j++){
            cin >> arr[i][j];
            if( i == j ){
                ar[i] = arr[i][j];
            }
        }
    }
    sort(ar,ar+n); // nlogn
    for(int i = 0 ; i<n;i++)
        cout << ar[i] << " ";
    return 0;
}
