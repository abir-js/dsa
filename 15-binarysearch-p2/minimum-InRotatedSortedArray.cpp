class Solution {
public:
    int findMin(vector<int>& nums) {
        //code here

        int start = 0;
        int end = nums.size()-1;
        int smallest = nums[0];

        while(start <= end){
            int mid = start + (end-start)/2;

            if(nums[mid] < nums[0] ){
                smallest = nums[mid];
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return smallest;

    }
};