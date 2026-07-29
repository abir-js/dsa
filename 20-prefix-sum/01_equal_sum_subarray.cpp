class Solution {
public:
	bool canSplit(vector<int>& nums) {
		//code here
		int n = nums.size();
		float total_sum = 0, half_sum = 0;
		for(int i=0; i<n; i++){
			total_sum+=nums[i];
		}
		half_sum = total_sum/2;
		float local_sum=0;
		for(int i=0; i<n-1; i++){
			local_sum+=nums[i];
			if(local_sum == half_sum)
				return 1;
		}
		return 0;
	}
};