#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>&v){
    int n = v.size();
    for(int i = 1 ; i < n ; i++){
        int key = v[i], j = i-1;
        while(j >= 0 && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
        for(int i = 0 ; i < n ; i++){
            cout<<v[i]<<' ';
        }
        cout<<'\n';
    }
}

int main()
{
    int n; cin>>n;
    vector<int>v(n);
    for(auto& it : v) cin>>it;
    insertionSort(v);
    return 0;
}
