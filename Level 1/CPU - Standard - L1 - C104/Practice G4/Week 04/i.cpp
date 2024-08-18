#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



signed  main(){
    FAST
    int arr[3][3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)cin>>arr[i][j];

    for(int i=0;i<3;i++) {
        for (int j = 0; j < 3; j++) {
            int sum = arr[i][j];
            if (j < 2)sum += arr[i][j + 1];
            if (j != 0)sum += arr[i][j - 1];
            if (i != 0)sum += arr[i - 1][j];
            if (i < 2)sum += arr[i + 1][j];

            if (sum % 2 == 0)cout << '1';
            else cout << '0';
        }
        cout<<'\n';
    }



    return 0;
}
