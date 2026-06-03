class Solution {
public:
  vector<int> insertionSort(vector<int>& arr) {
    // Write your code here
	int n = arr.size();

	for(int i=1; i<n; i++){
		for(int j=i; j>0; j--){
			if(arr[j-1] > arr[j]){
				swap(arr[j-1], arr[j]);
			} else break;
		}
	}
	return arr;
  }
};