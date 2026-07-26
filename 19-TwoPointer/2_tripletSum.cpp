bool hasTripletSum(vector<int> &arr, int target) {
    // Code Here
    int n = arr.size();
    if (n < 3) return false;

    sort(arr.begin(), arr.end());    //O(n logn)

    for (int i = 0; i < n - 2; i++) {
        int start = i + 1;
        int end = n - 1;
        int newTarget = target - arr[i];

        while (start < end) {
	        // O(n²)
            int sum = arr[start] + arr[end];

            if (sum == newTarget) {
                return true;
            } 
            else if (sum < newTarget) {
                start++;
            } 
            else {
                end--;
            }
        }
    }
    return false;
}