class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = n - 1;
        k  = k % n;

        while (i < j) {
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
            i++;
            j--;
        }

        // Reverse first K element
         i = 0, j = k - 1;

        while (i < j) {
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
            i++;
            j--;
        }

        // Reverse rest element
         i = k, j = n - 1;

        while (i < j) {
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
            i++;
            j--;
        }
    }
};