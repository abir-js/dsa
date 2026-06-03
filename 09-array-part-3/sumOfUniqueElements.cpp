class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        // Loop through all array
        for (int i = 0; i < n; i++) {
            bool isMatch = false;
            for (int j = 0; j < n; j++) {
                if (i == j)
                    continue;
                else if (nums[i] == nums[j]) {
                    isMatch = true;
                    break;
                }
            }

            if (!isMatch)
                sum += nums[i];
        }

        return sum;
    }
};

// Method 2: Using Hash Map

class Solution {
public:
	int sumOfUnique(vector<int>& nums) {
		int n = nums.size();
		int sum = 0;
		vector<int>freq(101, 0);
		for(int i=0; i<n; i++){
			freq[nums[i]]++;
		}
		
		for(int i=1; i<freq.size(); i++){
			if(freq[i] == 1){
				sum+=i;
			}
		}
		return sum;
	}
};