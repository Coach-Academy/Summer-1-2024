#include <bits/stdc++.h>
using namespace std;

int ans;
void bubbleSort(vector<int>&v){
    int n = v.size();
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n-1 ; j++){
            if(v[j]>v[j+1]){
                ans++;
                swap(v[j], v[j+1]);
            }
        }
    }
}

int main()
{
    int n; cin>>n;
    vector<int>v(n);
    for(auto& it : v) cin>>it;
    bubbleSort(v);
    cout<<"Array is sorted in "<<ans<<" swaps.\n"
        <<"First Element: "<<v[0]<<"\nLast Element: "<<v.back();
    return 0;
}
