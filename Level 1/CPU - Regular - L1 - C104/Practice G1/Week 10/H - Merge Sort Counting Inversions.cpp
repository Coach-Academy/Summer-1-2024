#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
long long res=0;
void merge(int st, int mid, int e, vector<int>&arr){
    int n = e-st+1, ptr_l = st, ptr_r=mid+1;
    vector<int>temp(n);

    for(int i=0;i<n;i++){
        if(ptr_l>mid) temp[i]=arr[ptr_r], ptr_r++;
        else if(ptr_r>e) temp[i]=arr[ptr_l++];
        else if(arr[ptr_l]>arr[ptr_r]){
            temp[i]=arr[ptr_r++];
            res+=(mid-ptr_l+1);
        }
        else temp[i]=arr[ptr_l++];
    }

    int idx = st;
    for(int element:temp)
        arr[idx++]=element;
}
void merge_sort(int st, int e, vector<int>&v) {
    if (st >= e) return;
    int mid=(st+e)/2;
    merge_sort(st, mid, v);
    merge_sort(mid+1, e, v);
    merge(st, mid, e, v);
}
void TT(){
    res=0;
    int n;
    cin>>n;
    vector<int>v(n);
    for(int &i:v) cin>>i;
    merge_sort(0, n-1, v);
    cout<<res<<'\n';
}
int main() {
    FAST
    int testCases = 1;
    cin >> testCases;
    while (testCases--) TT();
    return 0;
}
