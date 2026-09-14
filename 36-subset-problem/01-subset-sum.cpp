class Solution {
    public:

    void findSubsetSum(vector<int> &arr, int idx, int n, int sum, vector<int> &ans){
        if(idx==n){
            ans.push_back(sum);
            return;
        }
        findSubsetSum(arr, idx+1, n, sum+arr[idx], ans);
        findSubsetSum(arr, idx+1, n, sum, ans);
    }

    vector<int> subsetSums(vector<int>& arr) {
        // Your code here

        vector<int> ans;
        findSubsetSum(arr, 0, arr.size(), 0, ans);

        return ans;
    }
};