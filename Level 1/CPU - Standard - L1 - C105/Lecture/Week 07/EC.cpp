int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++)
        cin >> arr[i];
    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >>r;
        for(int i =l;i<r;i++)
            cout << pow(arr[i],2) << endl;
    }
    return 0;
}
