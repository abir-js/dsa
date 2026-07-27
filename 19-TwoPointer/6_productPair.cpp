bool isProduct(vector<int>& arr, long long target) {
    // Your code here
    int mid=-1, n = arr.size();
	//sort the array
	sort(arr.begin(), arr.end());

	// take mid as last negative number
	for(int i=0; i<n; i++){
		if(arr[i] < 0){
			mid = i;
		} else {
			break;
		}
	}

	// if target is positive
	if(target >= 0){
		// both numbers will be negative
		int start = 0, end = mid;
		while(start < end){
			int mul = arr[start] * arr[end];
			if(mul == target){
				return true;
			} else if(mul < target){
				end--;
			} else {
				start++;
			}
		}

		// both numbers will be positive
		start = mid+1, end=n-1;
		while(start < end){
			int mul = arr[start] * arr[end];
			if(mul == target){
				return true;
			} else if(mul < target){
				start++;
			} else {
				end--;
			}
		}
	}
	

	// if target is negative
	else {
		int start = 0, end = mid+1;
		while(start <= mid && end < n){
			if(arr[start] * arr[end] == target){
				return true;
			}
			else if(arr[start]*arr[end] < target){
				start++;
			} else {
				end++;
			}
		}
	}
	return 0;
}