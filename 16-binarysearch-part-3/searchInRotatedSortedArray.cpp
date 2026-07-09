int search(vector<int>& arr, int key) {
    // Your code here
    int n = arr.size();
    int start = 0, end = n-1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(key == arr[mid] ){
            return mid;
        }

        // left part
        else if(arr[mid] >= arr[0]){
            // array is sorted from start to mid
            if(key >= arr[start] && key < arr[mid]){
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        // right part
        else {
            // array is dorted from mid to right
            if(key >= arr[mid] && key <= arr[end]){
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }


    return -1;
}