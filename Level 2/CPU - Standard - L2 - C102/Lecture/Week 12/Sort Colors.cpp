class Solution {
public:
    void merge(int l, int md, int r, vector<int>&v){
        vector<int>L, R;
        for(int i = l; i <= md ; i++){
            L.push_back(v[i]);
        }
        for(int i = md+1 ; i<= r ; i++){
            R.push_back(v[i]);
        }
        L.push_back(INT_MAX); R.push_back(INT_MAX);

        int lp = 0, rp = 0;
        for(int i = l; i <= r ; i++){
            if(L[lp] <= R[rp]){
                v[i] = L[lp++];
            }
            else v[i] = R[rp++];
        }
    }
    void mergeSort(int l, int r, vector<int>&v){
        if(l>=r) return;
        int md = (l+r)/2;
        mergeSort(l, md, v);
        mergeSort(md+1, r, v);
        merge(l, md, r, v);
    }
    void sortColors(vector<int>& nums) {
        mergeSort(0, nums.size()-1, nums);
    }
};