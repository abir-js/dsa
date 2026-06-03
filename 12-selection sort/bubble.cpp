class Solution {
public:
  vector<int> bubbleSort(vector<int>& arr) {
    // Write your code here
	int n = arr.size();

	int isswap = false;
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1-i; j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j], arr[j+1]);
				isswap = true;
			}
		}
		if(!isswap) return arr;
	}
	return arr;
  }
};