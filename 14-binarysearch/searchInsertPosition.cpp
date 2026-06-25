int searchInsert(vector<int>& nums, int target) {
    // Your code here
    int n = nums.size();
    int index = n;

    int start = 0, end = n-1;
    while(start <= end){
        int mid = start + (end-start)/2;

        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] > target){
            // agar mid element target se bada ho to use hi insert position maan lo or aage dhubno
            end = mid - 1;
            index = mid;
        }
        else {
            start = mid + 1;
        }
    }

    return index;
}