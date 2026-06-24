vector<int> searchRange(vector<int>& nums, int target) {
    // Your code here
    int n = nums.size();
    int start, end;

    // search in left side
    int first = -1;
    start = 0; end = n-1;
    while(start <= end){
        int mid = start + (end-start)/2;

        if(nums[mid] == target){
            // if found, mark it as first, then search in left part for any earlier occurence
            first=mid;
            end = mid - 1;
        }else if(nums[mid] < target ){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    // search in right side
    int last = -1;
    start = 0; end = n-1;
    while(start <= end){
        int mid = start + (end-start)/2;

        if(nums[mid] == target){
            // if found, mark it as last, then search first element in left part
            last=mid;
            start = mid + 1;
        }else if(nums[mid] < target ){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    vector<int> ans;
    ans.push_back(first);
    ans.push_back(last);

    return ans;
}