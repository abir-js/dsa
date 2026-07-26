class Solution {
	public:
	bool findPair(vector<int> &arr, int diff) {
		// code here
		 sort(arr.begin(), arr.end());

        int n = arr.size();
        int start = 0;
        int end = 1;

        while (start < n && end < n) {

            // Ensure the two pointers are on different elements
            if (start == end) {
                end++;
                continue;
            }

            int currDiff = arr[end] - arr[start];

            if (currDiff == diff) {
                return true;
            }
            else if (currDiff < diff) {
                end++;
            }
            else {
                start++;
            }
        }

        return false;
	}
};
